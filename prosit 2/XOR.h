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
	XOR();	// Constructeur par d�faut
	XOR(string a, string b);	// Constructeur avec param�tres
	string CD_XOR();	// Chiffreur/d�chiffreur

};

