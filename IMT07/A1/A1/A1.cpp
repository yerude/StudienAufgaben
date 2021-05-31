/*##############################################
Erweiterter Caeser Algorithmus
##############################################*/
#include <iostream>
using namespace std;

// Prototyp
void caesarCustom(string);

// Override
void caesar(string kette) {
	int laenge, verschiebung;
	//die Länge der ursprünglichen Zeichenkette ermitteln
	laenge = kette.length();
	cout << "Caesar-Verschluesselung" << endl;
	// ASCII Bereiche von A-Z: M = {65,...,90} mit 25 Buchstaben
	// ASCII Bereiche von a-z: M = {97,...,122} mit 25 Buchstaben
	// Jedes Zeichen um den angegebenen Wert verschieben
	for (int zaehler = 0; zaehler < laenge; zaehler++) {
		int ascii = int(kette[zaehler]);
		int offset = 1 + ascii + zaehler;
		bool encryptWasSuccess = false;

		if (ascii > 64 && ascii < 91) {
			while (offset > 90) {
				offset -= 26;
			}
			encryptWasSuccess = true;
		}
		if (ascii > 96 && ascii < 123) {
			while (offset > 122) {
				offset -= 26;
			}
			encryptWasSuccess = true;
		}
		if (!encryptWasSuccess) {
			cout << "?";
			cout << endl << endl;
		}
		cout << static_cast<char>(offset);
	}
}

// Main
int main(int argc, char** argv)
{
	string eingabe;
	//Die ursprüngliche Zeichenkette einlesen
	//bitte in einer Zeile eingeben
	cout << "Bitte geben Sie eine Zeichenkette ein (ohne Leerzeichen): ";
	cin >> eingabe;
	//bitte in einer Zeile eingeben
	cout << "Die urspruengliche Zeichenkette ist: " << eingabe << endl << endl;
	//die Verschlüsselungen durchführen
	caesar(eingabe);
	return 0;
}
