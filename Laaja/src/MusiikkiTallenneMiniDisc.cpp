/*
 * MusiikkiTallenneMiniDisc.cpp
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#include "MusiikkiTallenneMiniDisc.h"

MusiikkiTallenneMiniDisc::MusiikkiTallenneMiniDisc(){
	levyTyyppi = "MiniDisc";
	cout << "Kuvaus levyn sisallosta?: " << endl;
	cin >> ws ;
	getline(cin, kuvaus);
	cout << "Indeksien lkm?: " << endl;
	cin >> indeksienLkm;
}

MusiikkiTallenneMiniDisc::~MusiikkiTallenneMiniDisc(){

}

void MusiikkiTallenneMiniDisc::asetaRaitojenTiedot(){
	string raidanNimi;
	float raidanKesto;
		for(int i = 0; i < indeksienLkm; i++){
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

			this->kokonaisKesto = this->kokonaisKesto + raidanKesto;
		}
}

void MusiikkiTallenneMiniDisc::tulostaTiedot(){
	cout << "Levytyyppi: " << this->levyTyyppi << endl;
	cout << "Sisallon kuvaus: " << this->kuvaus << endl;
	cout << "Bandi/Artisti: " << this->bandiTaiArtisti << endl;
	cout << "Levyn nimi: " << this->nimi << endl;
	cout << "Tyylilaji: " << this->tyylilaji << endl;
	cout << "Kokonaiskesto: " << this->kokonaisKesto << endl;

}

int MusiikkiTallenneMiniDisc::getIndeksienLkm() const
{
    return indeksienLkm;
}

Raidat MusiikkiTallenneMiniDisc::getRaidat() const
{
    return raidat;
}

string MusiikkiTallenneMiniDisc::getKuvaus() const
{
    return kuvaus;
}

string MusiikkiTallenneMiniDisc::getLevyTyyppi() const
{
    return levyTyyppi;
}

void MusiikkiTallenneMiniDisc::setIndeksienLkm(int indeksienLkm)
{
    this->indeksienLkm = indeksienLkm;
}

void MusiikkiTallenneMiniDisc::setRaidat(Raidat raidat)
{
    this->raidat = raidat;
}

float MusiikkiTallenneMiniDisc::getKokonaisKesto() const
{
    return kokonaisKesto;
}

void MusiikkiTallenneMiniDisc::setKokonaisKesto(float kokonaisKesto)
{
    this->kokonaisKesto = kokonaisKesto;
}

void MusiikkiTallenneMiniDisc::setKuvaus(string kuvaus)
{
    this->kuvaus = kuvaus;
}




