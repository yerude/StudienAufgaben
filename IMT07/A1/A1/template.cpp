
//
////die Prototypen für die Funktionen
//void dreher(string);
//void asciiCode(string);
//void caesar(string);
//void gartenzaun(string);
////die Funktion zum Umdrehen
//void dreher(string kette)
//{
//	//die Länge der ursprünglichen Zeichenkette ermitteln
//	int laenge;
//	laenge = kette.length();
//	//length liefert die "echte" Länge
//	//Daher muss 1 abgezogen werden
//	laenge = laenge - 1;
//	cout << "Verschluesselung durch Umdrehen" << endl;
//	//die Zeichen von hinten nach vorne ausgeben
//	for (int zaehler = laenge; zaehler >= 0; zaehler--)
//		cout << kette[zaehler];
//	cout << endl << endl;
//}
////die Funktion zur numerischen Verschlüsselung über Ausgabe des
////ASCII-Wertes
//void asciiCode(string kette)
//{
//	//die Länge der ursprünglichen Zeichenkette ermitteln
//	int laenge;
//	laenge = kette.length();
//	cout << "Verschluesselung durch ASCII-Ausgabe" << endl;
//	//für jedes Zeichen den ASCII-Wert ausgeben
//	for (int zaehler = 0; zaehler < laenge; zaehler++)
//		cout << static_cast<int>(kette[zaehler]) << ' ';
//	cout << endl << endl;
//}
////die Funktion zur Cäsar-Verschlüsselung
//void caesar(string kette) {
//	int laenge, verschiebung;
//	//die Länge der ursprünglichen Zeichenkette ermitteln
//	laenge = kette.length();
//	cout << "Caesar-Verschluesselung" << endl;
//	//den Verschiebewert einlesen
//	cout << "Bitte geben Sie den Verschiebewert ein: ";
//	cin >> verschiebung;
//	//jedes Zeichen um den angegebenen Wert verschieben
//	for (int zaehler = 0; zaehler < laenge; zaehler++)
//		cout << static_cast<char>(kette[zaehler] + verschiebung);
//	cout << endl << endl;
//}
////die Funktion zur Gartenzaunverschlüsselung
//void gartenzaun(string kette)
//{
//	string codiert, teil1, teil2;
//	//die Länge der ursprünglichen Zeichenkette ermitteln
//	int laenge;
//	laenge = kette.length();
//	//die Zeichen verteilen
//	for (int zaehler = 0; zaehler < laenge; zaehler++)
//	{
//		//Zeichen mit einem geraden Index kommen in die Zeichenkette
//		//teil1
//		//die Zählung beginnt bei 0!
//		if (zaehler % 2 == 0)
//			teil1.push_back(kette[zaehler]);
//		//bei einem ungeraden Index werden die Zeichen in der
//		//Zeichenkette teil2 abgelegt
//		else
//			teil2.push_back(kette[zaehler]);
//	}
//	//die beiden Zeichenketten wieder zusammenbauen
//	codiert = teil1 + teil2;
//	//und ausgeben
//	cout << "Gartenzaunverschluesselung" << endl;
//	cout << "Die obere Haelfte ist " << teil1 << endl;
//	cout << "Die untere Haelfte ist " << teil2 << endl;
//	cout << "Das komplette Wort ist " << codiert << endl;
//	cout << endl << endl;
//}
//int main(int argc, char** argv)
//{
//	string eingabe;
//	//Die ursprüngliche Zeichenkette einlesen
//	//bitte in einer Zeile eingeben
//	cout << "Bitte geben Sie eine Zeichenkette ein (ohne Leerzeichen): ";
//	cin >> eingabe;
//	//bitte in einer Zeile eingeben
//	cout << "Die urspruengliche Zeichenkette ist: " << eingabe << endl << endl;
//	//die Verschlüsselungen durchführen
//	dreher(eingabe);
//	asciiCode(eingabe);
//	caesar(eingabe);
//	gartenzaun(eingabe);
//	return 0;
//}
