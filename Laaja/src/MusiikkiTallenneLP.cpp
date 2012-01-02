/*
 * MusiikkiTallenneLP.cpp
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#include "MusiikkiTallenneLP.h"

MusiikkiTallenneLP::MusiikkiTallenneLP(){
	levyTyyppi = "LP";
	cout << "A-puolen raitojen lkm?: " << endl;
	cin >> ws >>raitojenLkmA;
	cout << "B-puolen raitojen lkm?: " << endl;
	cin >> ws >> raitojenLkmB;

}

MusiikkiTallenneLP::~MusiikkiTallenneLP(){

}
void MusiikkiTallenneLP::asetaRaitojenTiedot(int id){
	string raidanNimi;
	float raidanKesto;
	char idChar;
	if(id == 0){
		idChar = 'A';
	}
	if(id == 1){
		idChar = 'B';
	}
	if(id == 0){
		cout << "\n"<< idChar << "-puolen tiedot:" << endl;
			for(int i = 0; i < this->raitojenLkmA; i++){
				raidanNimi = "";
				raidanKesto = 0.0;
				cout << "Anna raidan " << i+1 << " nimi: " << endl;
				cin >> ws;
				getline(cin, raidanNimi);
				aPuoli.setNimi(i, raidanNimi);

				cout << "Anna raidan " << i+1 << " kesto: " << endl;
				cin >> ws;
				cin >> raidanKesto;
				aPuoli.setKesto(i, raidanKesto);

				this->kokonaisKestoA = this->kokonaisKestoA + raidanKesto;
			}
	}
	if(id == 1){
		cout << "\n"<< idChar << "-puolen tiedot:" << endl;
			for(int i = 0; i < this->raitojenLkmB; i++){
				raidanNimi = "";
				raidanKesto = 0.0;
				cout << "Anna raidan " << i+1 << " nimi: " << endl;
				cin >> ws;
				getline(cin, raidanNimi);
				bPuoli.setNimi(i, raidanNimi);

				cout << "Anna raidan " << i+1 << " kesto: " << endl;
				cin >> ws;
				cin >> raidanKesto;
				bPuoli.setKesto(i, raidanKesto);

				this->kokonaisKestoB = this->kokonaisKestoB + raidanKesto;
			}
	}
}

float MusiikkiTallenneLP::getKokonaisKestoA() const
{
    return kokonaisKestoA;
}

float MusiikkiTallenneLP::getKokonaisKestoB() const
{
    return kokonaisKestoB;
}

string MusiikkiTallenneLP::getLevyTyyppi() const
{
    return levyTyyppi;
}

Raidat MusiikkiTallenneLP::getApuoli() const
{
    return aPuoli;
}

Raidat MusiikkiTallenneLP::getBpuoli() const
{
	return bPuoli;
}

int MusiikkiTallenneLP::getRaitojenLkmA() const
{
    return raitojenLkmA;
}

int MusiikkiTallenneLP::getRaitojenLkmB() const
{
    return raitojenLkmB;
}

void MusiikkiTallenneLP::setKokonaisKestoA(float kokonaisKestoA)
{
    this->kokonaisKestoA = kokonaisKestoA;
}

void MusiikkiTallenneLP::setKokonaisKestoB(float kokonaisKestoB)
{
    this->kokonaisKestoB = kokonaisKestoB;
}

void MusiikkiTallenneLP::setLevyTyyppi(string levyTyyppi)
{
    this->levyTyyppi = levyTyyppi;
}

void MusiikkiTallenneLP::setApuoli(Raidat puoli)
{
    aPuoli = puoli;
}

void MusiikkiTallenneLP::setBpuoli(Raidat puoli)
{
	bPuoli = puoli;
}

void MusiikkiTallenneLP::setRaitojenLkmA(int raitojenLkmA)
{
    this->raitojenLkmA = raitojenLkmA;
}


void MusiikkiTallenneLP::setRaitojenLkmB(int raitojenLkmB)
{
    this->raitojenLkmB = raitojenLkmB;
}

void MusiikkiTallenneLP::tulostaTiedot(){
	cout << "Levytyyppi: " << this->levyTyyppi << endl;
	cout << "Bandi/Artisti: " << this->bandiTaiArtisti << endl;
	cout << "Levyn nimi: " << this->nimi << endl;
	cout << "Tyylilaji: " << this->tyylilaji << endl;
}




