/*************************************************************************************************************************************************************
*Teht�v�: Harjoitus7
*Tekij�: Noora Kuikka
*PVM: 05.10.2013
*Kuvaus:
*Harjoitus 7 (palautus vko 40)
*
*Tee ohjelma, joka kysyy k�ytt�j�lt� nimen, pituuden senttein� ja painon kiloina.
*Ohjelma laskee ja tulostaa k�ytt�j�n ihannepainon (pituus-100). Lis�ksi
*ohjelma kertoo k�ytt�j�n nykyisen painon eron kiloina verrattuna ihanne-
*painoon. Ohjelman k�ytt�liittym� toimii seuraavasti:
*
*Ihannepaino
*
*Ohjelma laskee ihannepainosi
*pituutesi perusteella.
*
*Anna nimesi > Mooses
*Anna pituutesi senttein� > 175
*Anna osoitteesi > Peikkovuori 5 as 4
*Anna painosi kiloina > 89
*
*
*Arvoisa Mooses
*Osoitteesi on Peikkovuori 5 as 4
*Nykyinen painosi 89.0 kg
*Ihannepainosi 75.0 kg
*Erotus 14.0 kg
*
*...
*a) k�yt� syotto/tulostus toimintoihin funktioita
*printf/scanf/gets/...(perus C:n funtiot, kirja sivu 86 - 91)  TEHD��N MY�HEMMIN
*b) k�yt� cin/cout/cin.get... olioita ohjelman
*toteuttamiseen (c++ metodit, kirja sivu 92 - 99)
*Versio 1.0 H4719 05.10.2013
**************************************************************************************************************************************************************/
#include <iostream>
using namespace std;
int main(void)
{
    int weight;
	int height;
	int weight2;
	int difference;
	char name[21];
	char address[51];

        cout << "Ihannepaino\n";
	
	    cout << "\nAnna nimesi: ";
	    cin >> name;
	
	    cout << "Anna pituutesi senttein�: ";
	    cin >> height;
	
	    cout << "Anna osoitteesi: ";
		cin.get();
	    cin.get(address, 51);
        
	    cout << "Anna painosi kiloina: ";
	    cin >> weight;
        
	
	weight2 = height - 100;
	difference = weight - weight2;
	
	cout << "\nArvoisa " << name <<",";
	cout << "\nOsoitteesi on " << address <<".";
    cout << "\nNykyinen painosi on " << weight <<".";
	cout << "\nIhannepainosi on " << weight2 <<".";
	cout << "\nErotus: " <<difference <<"\n";
}