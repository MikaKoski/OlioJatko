/*
 * MusiikkiTallenneCD.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#include "MusiikkiTallenneCD.h"
#include <string>

MusiikkiTallenneCD::MusiikkiTallenneCD(){
	levyTyyppi = "CD";
	cout << "Raitojen lkm?: " << endl;
	cin >> raitojenLkm;
}

MusiikkiTallenneCD::~MusiikkiTallenneCD(){
}

void MusiikkiTallenneCD::asetaRaitojenTiedot(){
	string raidanNimi;
	float raidanKesto;
		for(int i = 0; i < raitojenLkm; i++){
			raidanNimi = "";
			raidanKesto = 0.0;
			cout << "Anna raidan " << i+1 << " nimi: " << endl;
			cin >> ws;
			getline(cin, raidanNimi);
			raidat.setNimi(i, raidanNimi);

			cout << "Anna raidan " << i+1 << " kesto: " << endl;
			cin >> ws;
			cin >> raidanKesto;
			raidat.setKesto(i, raidanKesto);

			kokonaisKesto = kokonaisKesto + raidanKesto;
		}

}

float MusiikkiTallenneCD::getKokonaisKesto() const
{
    return kokonaisKesto;
}

string MusiikkiTallenneCD::getLevyTyyppi() const
{
    return levyTyyppi;
}

Raidat MusiikkiTallenneCD::getRaidat() const
{
    return raidat;
}

int MusiikkiTallenneCD::getRaitojenLkm() const
{
    return raitojenLkm;
}

void MusiikkiTallenneCD::setKokonaisKesto(float kokonaisKesto)
{
    this->kokonaisKesto = kokonaisKesto;
}

void MusiikkiTallenneCD::setLevyTyyppi(string levyTyyppi)
{
    this->levyTyyppi = levyTyyppi;
}

void MusiikkiTallenneCD::setRaidat(Raidat aRaidat)
{
    this->raidat = aRaidat;
}

void MusiikkiTallenneCD::setRaitojenLkm(int raitojenLkm)
{
    this->raitojenLkm = raitojenLkm;
}

void MusiikkiTallenneCD::tulostaTiedot(){
	cout << "Levytyyppi: " << this->levyTyyppi << endl;
	cout << "Bandi/Artisti: " << this->bandiTaiArtisti << endl;
	cout << "Levyn nimi: " << this->nimi << endl;
	cout << "Tyylilaji: " << this->tyylilaji << endl;
	cout << "Kokonaiskesto: " << this->kokonaisKesto << endl;
	cout << "Raitojen lkm: " << this->raitojenLkm << endl;
}



