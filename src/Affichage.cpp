#include "Affichage.h"
#include "Monde.h"
#include "Homme.h"
#include "Femme.h"
#include "Enfant.h"
#include "Donut.h"
#include "Cochon.h"
#include "econio.h"
#include "constants.h"
#include <iostream>
#include <typeinfo>
#include <sstream>
#include <string>

using namespace std;

void afficherStructure() {
    // Réglage de la taille de la console
    int lines = 11 + kLongM;
    int cols = 30 + 2*kLargM;
    stringstream configCons;
    configCons << "mode con LINES=" << lines << " COLS=" << cols;
    string tmp = configCons.str();
    system(tmp.c_str());

    // Génération de la grille
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
    // Fermeture suppérieure des cases
    gotoxy(5,3);
    for (int j = 1; j <= kLargM/2; j++) {

            cout << "   _";

    }
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
    textcolor(DARKGRAY);

    // Grille de l'application
    gotoxy(10+2*kLargM,2);
    for(int i = 60; i<80; i++) {
        cout << "-";
    }

    for(int i = 3; i<6+kLongM; i++) {
        gotoxy(10+2*kLargM,i);
        cout << "|";
    }

    gotoxy(10+2*kLargM,4);
    for(int i = 60; i<80; i++) {
        cout << "-";
    }

    gotoxy(0,6+kLongM);
    for(int i = 0; i<cols; i++) {
        cout << "-";
    }

    gotoxy(0,8+kLongM);
    for(int i = 0; i<cols; i++) {
        cout << "-";
    }

    // Légende
    gotoxy(2,7+kLongM);
    textcolor(YELLOW);
    cout << "H : Homme";

    gotoxy(14,7+kLongM);
    textcolor(CYAN);
    cout << "F : Femme";

    gotoxy(26,7+kLongM);
    textcolor(LIGHTCYAN);
    cout << "E : Enfant";

    gotoxy(39,7+kLongM);
    textcolor(LIGHTGREEN);
    cout << "D : Donut";

    gotoxy(51,7+kLongM);
    textcolor(LIGHTMAGENTA);
    cout << "C : Cochon";


    // Texte des stats
    textcolor(LIGHTGRAY);
    gotoxy(12+2*kLargM,3);
    cout << "Jour :";
    gotoxy(12+2*kLargM,5);
    cout << "Sur la carte :";
    gotoxy(13+2*kLargM,6);
    cout << "- Homme :";
    gotoxy(13+2*kLargM,7);
    cout << "- Femme :";
    gotoxy(13+2*kLargM,8);
    cout << "- Enfant :";
    gotoxy(13+2*kLargM,9);
    cout << "- Cochon :";
    gotoxy(13+2*kLargM,10);
    cout << "- Donut :";

}

void placerPosition(const Position _pos, const string _letter, int color) {
    // Calcul de la position du curseur
    int x = 4 + _pos.getAbs() * 2;
    int y = 4 + (kLongM - _pos.getOrd());

    // Ecriture de la lettre avec la couleur à afficher
    gotoxy(x,y);
    textcolor(color);
    cout << _letter;
    textcolor(LIGHTGRAY);
}

void placerElement(const Element *_ele) {
    // Vérifie le type de l'élément passé pour ensuite le placer sur la map
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
        placerPosition(_ele->getPos(),"C", LIGHTMAGENTA);
    }
    else {
        placerPosition(_ele->getPos(),"?", LIGHTRED);
    }
}

void supprimerPosition (const Position _pos) {
    // Efface la case voulue sur la carte
    placerPosition(_pos, " ", LIGHTGRAY);
}

void effacerAllPos () {
    // Efface toutes les positions posibles
    for (unsigned i=1 ; i<= kLongM ; i++) {
        for (unsigned j=1 ; j <= kLargM ; j++) {
            if ((j + i) % 2 == 0) {
                supprimerPosition(Position (j,i));
            }
        }
    }
}

void refreshMap (Monde world) {
    // Efface la map
    effacerAllPos();
    // Parcours le vecteur du monde pour rafficher tout ce qu'il y a actuellement
    for (unsigned i=0 ; i< world.size() ; i++) {
        placerElement(world.at(i));
    }
}

void replacerCurs () {
    // Positionnement du curseur en bas de k'application
    gotoxy(0, 9 + kLongM);
}

void refreshStats (Monde world) {
    // Actualisation des statistiques
    textcolor(LIGHTGRAY);
    gotoxy(19+2*kLargM,3);
    cout << "      ";
    gotoxy(19+2*kLargM,3);
    cout << world.getNbJours();
    gotoxy(23+2*kLargM,6);
    cout << "    ";
    gotoxy(23+2*kLargM,6);
    cout << world.getNombre(typeid(Homme));
    gotoxy(23+2*kLargM,7);
    cout << "    ";
    gotoxy(23+2*kLargM,7);
    cout << world.getNombre(typeid(Femme));
    gotoxy(24+2*kLargM,8);
    cout << "    ";
    gotoxy(24+2*kLargM,8);
    cout << world.getNombre(typeid(Enfant));
    gotoxy(24+2*kLargM,9);
    cout << "    ";
    gotoxy(24+2*kLargM,9);
    cout << world.getNombre(typeid(Cochon));
    gotoxy(23+2*kLargM,10);
    cout << "    ";
    gotoxy(23+2*kLargM,10);
    cout << world.getNombre(typeid(Donut));
}
