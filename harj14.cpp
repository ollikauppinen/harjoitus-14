/**********************************************************
*Tehtävä: Harjoitus14
*Tekijä: Olli Kauppinen
*PVM: 08.10.2013
*Kuvaus:
*Tee ohjelma, joka kysyy henkilötietosi seuraavasti:
*Anna (kaikki) etunimesi (merkkijono):
*Anna kengannumero (kokonaisluku):
*Anna sukunimi (merkkijono):
*Anna koulumatka (reaaliluku):
*Anna osoitteesi:
*Anna postinumero:
*
*Ohjelma tulostaa tiedot seuraavasti:
*sukunimi etunimet
*osoite
*postinumero
*kengannumero ja koulumatka
*
*Käytä C++:n cin- ja cout-olioita ohjelman toteuttamiseen.
*
* Versio 1.0 H4718 08.10.2013
***********************************************************/

#include<iostream>
using namespace std;

int main()
{
	char nimi [30];
	char sukunimi [30];
	char osoite [30];
	int shoe;
	int posti;
	double matka;

	cout << "\nAnna kaikki nimesi:\n";
	cin.get (nimi, 30);
	cout << "\nAnna kengannumero:\n";
	cin >> shoe;
	cout << "\nAnna sukunimi:\n";
	cin >> sukunimi;
	cout << "\nKoulumatkasi?\n";
	cin >> matka;
	cout << "\nAnna osoitteesi:\n";
	cin.get ();
	cin.get (osoite, 30);
	cout << "\nAnna postinumero:\n";
	cin >> posti;

	cout << sukunimi << " " << nimi << endl;
	cout << osoite << endl;
	cout << posti << endl;
	cout << "Kengännumerosi on " << shoe << " , koulumatkasi on " << matka << " km" << endl;
}