#include "Affichage.h"
#include "econio.h"
#include "constants.h"
#include <iostream>

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

    // affichage des ordonn�es
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
    // Premi�re ligne de caract�re
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

    // Toutes les lignes sauf la premi�re et la derni�re
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

    // La derni�re ligne
    gotoxy(5,4+kLongM);
    for (int j = 1; j <= kLargM/2; j++) {
        cout << "\\_/ ";
    }
    if (kLargM%2 != 0) {
        cout << "\\_/";
    }

    // Passage � la couleur normale
    textcolor(LIGHTGRAY);
}

void placerPosition(const Position _pos, const string _letter) {
    int x = 4 + _pos.getAbs() * 2;
    int y = 4 + (kLongM - _pos.getOrd());

    gotoxy(x,y);

    cout << _letter;
}
