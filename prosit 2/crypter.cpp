#include "crypter.h"
#include "cesar.h"
#include "XOR.h"
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

crypter::crypter()
{
    this->source = "source.txt";
    this->mode = 1;
    this->destination = "destination.txt";
}

crypter::crypter(string a, string b, int c)
{
    this->source = a;
    this->mode = c;
    this->destination = b;
}

void crypter::cryptageD()
{
    ifstream fichier(source);
    if (!fichier) { cout << "erreur lors de louverture du fichier"; }

    while (getline(fichier, ligne)) {
        m += ligne + "\n";
    }
    fichier.close();

    switch (this->mode)
    {
    case 1://mode cesar
        cout << "mode de chiffrement cesar \n";
        crypt_cesar();
        cout << "message chiffre (mode1) : " << m << endl;
        break;
    case 2:
        cout << "mode de chiffrement XOR \n";
        crypt_XOR();
        cout <<"message chiffre (mode2) : " << m << endl;
        break;
    case 3:
        cout << "mode de chiffrement 3"; 
        crypt_cesar();
        crypt_XOR();
        cout << "message chiffre (mode3) : " << m << endl;
        break;
    }

    ofstream fichier_dest(destination, ios::trunc);

    if (!fichier_dest) { cout << "erreur d'ouverture"<<endl; }
    fichier_dest << m;
    fichier_dest.close();

}

void crypter::crypt_cesar()
{
    int cd;
    cout << "Entrer 1 pour chiffrer ou 2 pour dechiffrer :" << endl;
    cin >> cd;
    int code;
    cout << "veuillez entre le code x pour cesar : ";
    cin >> code;
    if (cd == 1) {
        cout << "chiffrage \n";
        Cesar c(m, code);
        m = c.Chiffrage();
    }
    else if (cd == 2) {
        cout << "Dechiffrage \n";
        Cesar c(m, code);
        m = c.Dechiffrage();
    }
    else { cout << "erreur \n"; }
}

void crypter::crypt_XOR()
{
    string k;
    cout << "Entrer la clef pour XOR :" << endl;
    cin >> k;
    XOR x(m, k);
    m = x.CD_XOR();

}
