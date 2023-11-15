#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class XOR
{
private:
	string key;
	string message;

public:
	XOR();	// Constructeur par défaut
	XOR(string a, string b);	// Constructeur avec paramètres
	string CD_XOR();	// Chiffreur/déchiffreur

};

