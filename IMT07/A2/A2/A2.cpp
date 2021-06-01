/*##############################################
Vinegere Verschlüsselung
##############################################*/
#include <iostream>
using namespace std;

// Prototyp
void vinegereVerschluesselung(string,string);

//override
void vinegereVerschluesselung(string zeichenkette, string key) {
	string fixedKey = key;
	string encrypted = zeichenkette;
	for (char& c : fixedKey) {
		c = toupper(c);
	}
	for (char& c : encrypted) {
		c = toupper(c);
	}

	// Schluessel auffüllen oder kürzen, je nach Fall
	while (fixedKey.length() < zeichenkette.length()) {
		fixedKey += fixedKey;
	}
	fixedKey.resize(zeichenkette.length());
	
	cout << "Zeichenkette: " << encrypted << endl;
	cout << "Verschluesselungskey: " << fixedKey << endl;

	// encrypten
	for ( int i = 0 ; i < encrypted.length() ; i++ ) {
		int ascii = (int(encrypted[i]) + int(fixedKey[i] - 65 ));
		if (ascii > 90) {
			ascii = (ascii % 90) + 64;
		}
		encrypted[i] = static_cast<char>(ascii);
	}

	//ausgabe
	cout << "kodiertes Ergebnis: " << encrypted << endl;
}

int main()
{
	vinegereVerschluesselung("SehrgeheimesTreffen", "TOPSECRET");
}

