#include "cesar.h"

Cesar::Cesar()
{
	this->message = "hello world";
	this->codde = 3;
}

Cesar::Cesar(string a, int b)
{

	this->message = a;
	this->codde = b;
}

string Cesar::Chiffrage()
{
    string resultat = "";
    for (char caractere : this->message) {
        // Vérifiez si le caractère est une lettre majuscule
        if (isupper(caractere)) {
            resultat += char(int(caractere + this->codde - 65) % 26 + 65);
        }
        // Vérifiez si le caractère est une lettre minuscule
        else if (islower(caractere)) {
            resultat += char(int(caractere + this->codde - 97) % 26 + 97);
        }
        // Si le caractère n'est pas une lettre, laissez-le tel quel
        else { resultat += caractere; }
    }
    return resultat;
}

string Cesar::Dechiffrage()
{
    string resultat = "";
    for (char caractere : this->message) {
        // Vérifiez si le caractère est une lettre majuscule
        if (isupper(caractere)) {
            resultat += char(int(caractere - this->codde - 65) % 26 + 65);
        }
        // Vérifiez si le caractère est une lettre minuscule
        else if (islower(caractere)) {
            resultat += char(int(caractere - this->codde - 97) % 26 + 97);
        }
        // Si le caractère n'est pas une lettre, laissez-le tel quel
        else { resultat += caractere; }
    }
    return resultat;
}
