#include "Affichage.h"
#include "Homme.h"
#include "Femme.h"
#include "Enfant.h"
#include "Donut.h"
#include "Cochon.h"
#include "econio.h"
#include "constants.h"
#include <iostream>
#include <typeinfo>

using namespace std;

void afficherGrille() {
    textcolor(GREEN);
    // affichage des abscisses
    gotoxy(5,1);
    for (int i = 1; i <= kLargM ; i += 1) {
        int x = i/10;
        cout << " " << x;
    }
    gotoxy(5,2);
    for (int i = 1; i <= kLargM ; i += 1) {
        int x = i % 10;
        cout << " " << x;
    }

    // affichage des ordonnées
    for (int i = 0; i < kLongM ; i += 1) {
        int x = kLongM - i;

        gotoxy(1,4+i);

        if (kLongM - i >= 10) {
            cout << x;
        }
        else {
            cout << "0" << x;
        }
    }

    textcolor(BROWN);

    // Affichage des cases ... enjoy
    // Première ligne de caractère
    gotoxy(5,4);
    int x = kLongM;
    if (x%2 == 0) {
        cout << " _/ ";
    }
    else {
        cout << "/ \\_";
    }
    for (int j = 1; j < kLargM/2; j++) {
        if (x%2 == 0) {
            cout << "\\_/ ";
        }
        else {
            cout << "/ \\_";
        }
    }

    if (x%2 == 0) {
        cout << "\\";
    }

    if (kLargM%2 != 0) {
        cout << "_";
    }

    // Toutes les lignes sauf la première et la dernière
    for (int i = 1; i < kLongM; i ++)
    {
        gotoxy(5,4+i);
        int x = kLongM - i;
        for (int j = 1; j <= kLargM/2; j++) {
            if (x%2 == 0) {
                cout << "\\_/ ";
            }
            else {
                cout << "/ \\_";
            }
        }

        if (x%2 == 0) {
            cout << "\\";
            if (kLargM%2 != 0) {
                cout << "_/";
            }
        }
        else {
            cout << "/";
            if (kLargM%2 != 0) {
                cout << " \\";
            }
        }
    }

    // La dernière ligne
    gotoxy(5,4+kLongM);
    for (int j = 1; j <= kLargM/2; j++) {
        cout << "\\_/ ";
    }
    if (kLargM%2 != 0) {
        cout << "\\_/";
    }

    // Passage à la couleur normale
    textcolor(LIGHTGRAY);
}

void placerPosition(const Position _pos, const string _letter, int color) {
    int x = 4 + _pos.getAbs() * 2;
    int y = 4 + (kLongM - _pos.getOrd());

    gotoxy(x,y);
    textcolor(color);
    cout << _letter;
    textcolor(LIGHTGRAY);
}

void placerElement(const Element *_ele) {
    if (typeid(*_ele) == typeid(Homme)) {
        placerPosition(_ele->getPos(),"H", YELLOW);
    }
    else if (typeid(*_ele) == typeid(Femme)) {
        placerPosition(_ele->getPos(),"F", CYAN);
    }
    else if (typeid(*_ele) == typeid(Enfant)) {
        placerPosition(_ele->getPos(),"M", LIGHTCYAN);
    }
    else if (typeid(*_ele) == typeid(Donut)) {
        placerPosition(_ele->getPos(),"D", LIGHTGREEN);
    }
    else if (typeid(*_ele) == typeid(Cochon)) {
        placerPosition(_ele->getPos(),"C", MAGENTA);
    }
    else {
        placerPosition(_ele->getPos(),"?", LIGHTRED);
    }
}
