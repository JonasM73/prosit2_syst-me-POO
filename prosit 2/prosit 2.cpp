// importation des bibliothèques requises
#include <iostream>
#include <fstream>
#include <string>
#include "crypter.h"
#include "Cesar.h"
#include "XOR.h"


using namespace std;


int main()
{
    string source, mode, destination;
    cout << "Entrer le nom du fichier source :" << endl;
    cin >> source;
    cout << "Entrer le numero de mode :" << endl;
    cin >> mode;
    cout << "Entrer le nom du fichier de destination :" << endl;
    cin >> destination;
    int Mode = stoi(mode);
    crypter crypte(source, destination, Mode);
    crypte.cryptageD();
}
