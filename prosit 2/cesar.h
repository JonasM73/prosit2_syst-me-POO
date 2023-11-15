#pragma once
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

class Cesar
{
private:
	string message;
	int codde;

public:
	Cesar();
	Cesar(string a, int b);
	string Chiffrage();
	string Dechiffrage();
};
