// A4.cpp : Diese Datei enthält die Funktion "main". Hier beginnt und endet die Ausführung des Programms.
//

#include <iostream>
#include <math.h>

using namespace std;

// prototype
string encryptRSA(string,int ,int);
string decrpytRSA(string,int ,int);

// encrypt:  c = k ^ e mod n
string encryptRSA(string message, int e, int n) {
	string msg;
	int ascii;
	long long int kpowe;
	int equation;
	for(char& c : message) {
		ascii = int(c);
		cout << ascii << endl;
		kpowe = (pow(ascii, e));
		cout << kpowe << endl;
		equation = kpowe % n;
		//cout << equation << endl;
		msg += static_cast<char>(equation);
		//msg += static_cast<char>(ascii);
	}
	return msg;
}

// decrypt : k = c ^ d mod n
string decrpytRSA(string message, int d, int n) {
	string msg;
	int ascii;
	long long int kpowe;
	int equation;
	for (char& c : message) {
		ascii = int(c);
		cout << ascii << endl;
		kpowe = (pow(ascii, d));
		cout << kpowe << endl;
		equation = kpowe % n;
		//cout << equation << endl;
		msg += static_cast<char>(equation);
	}
	return msg;
}

// n = 3713 public key 1
// e = 37	public key 2
// d = 97
int main()
{
	string encrypted = encryptRSA("Hallo", 37, 3713);
	cout << "n = 3713, e = 37 , d = 97" << endl;
	cout << "Geheimtreffen abgesagt wird verschluesselt zu: " << encrypted << endl;
	cout << "wird wieder decrpyted zu: " << decrpytRSA(encrypted, 97, 3713) << endl;

}

