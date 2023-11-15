#include "XOR.h"

XOR::XOR()
{
	this->message = "Hello World";
	this->key = "KEY";
}

XOR::XOR(string a, string b)
{
	this->message = a;
	this->key = b;
}

string XOR::CD_XOR()
{
	string encryptedMessage = this->message;
	for (size_t i = 0; i < this->message.length(); ++i) {
		encryptedMessage[i] = this->message[i] ^ this->key[i % this->key.length()];
	}
	return encryptedMessage;
}
