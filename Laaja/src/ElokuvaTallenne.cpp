/*
 * ElokuvaTallenne.cpp
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#include "ElokuvaTallenne.h"

ElokuvaTallenne::ElokuvaTallenne(){
	cout << "Alkuperainen nimi?: " << endl;
	cin >> ws;
	getline(cin, origNimi);
	cout << "Julkaisuvuosi?: " << endl;
	cin >> julkaisuVuosi;
	cout << "Tyylilaji?: " << endl;
	cin >> ws;
	getline(cin, tyylilaji);
	cout << "Ohjaaja?: " << endl;
	cin >> ws;
	getline(cin, ohjaaja);
	cout << "Kesto?(tuntia): " << endl;
	cin >> ws;
	getline(cin, kesto);

}

ElokuvaTallenne::~ElokuvaTallenne(){

}

string ElokuvaTallenne::getFormaatti() const
{
    return formaatti;
}

int ElokuvaTallenne::getJulkaisuVuosi() const
{
    return julkaisuVuosi;
}

string ElokuvaTallenne::getKesto() const
{
    return kesto;
}

string ElokuvaTallenne::getNimi() const
{
    return nimi;
}

string ElokuvaTallenne::getOhjaaja() const
{
    return ohjaaja;
}

string ElokuvaTallenne::getOrigNimi() const
{
    return origNimi;
}

string ElokuvaTallenne::getTyylilaji() const
{
    return tyylilaji;
}

void ElokuvaTallenne::setFormaatti(string formaatti)
{
    this->formaatti = formaatti;
}

void ElokuvaTallenne::setJulkaisuVuosi(int julkaisuVuosi)
{
    this->julkaisuVuosi = julkaisuVuosi;
}

void ElokuvaTallenne::setKesto(float kesto)
{
    this->kesto = kesto;
}

void ElokuvaTallenne::setNimi(string nimi)
{
    this->nimi = nimi;
}

void ElokuvaTallenne::setOhjaaja(string ohjaaja)
{
    this->ohjaaja = ohjaaja;
}

void ElokuvaTallenne::setOrigNimi(string origNimi)
{
    this->origNimi = origNimi;
}

void ElokuvaTallenne::setTyylilaji(string tyylilaji)
{
    this->tyylilaji = tyylilaji;
}

void ElokuvaTallenne::tulostaTiedot(){
	cout << "Formaatti: " << formaatti << endl;
	cout << "Elokuvan nimi: " << nimi << endl;
	cout << "Alkuperainen nimi: " << origNimi << endl;
	cout << "Julkaisuvuosi: " << julkaisuVuosi << endl;
	cout << "Tyylilaji: " << tyylilaji << endl;
	cout << "Ohjaaja: " << ohjaaja << endl;
	cout << "Kesto: " << kesto << "tuntia" << endl;
}




