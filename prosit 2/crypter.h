#pragma once
#pragma once
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class crypter
{
private:
	string source;
	string destination;
	int mode;
	string ligne;
	string m;

public:
	crypter();
	crypter(string a, string b, int c);
	void cryptageD();
	void crypt_cesar();
	void crypt_XOR();

};

