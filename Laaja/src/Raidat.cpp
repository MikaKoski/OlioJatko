/*
 * Raidat.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#include "Raidat.h"

Raidat::Raidat(){

}

Raidat::~Raidat(){

}

float Raidat::getKesto(int i){
	return this->kesto[i];
}

string Raidat::getNimi(int i) {
	return this->nimi[i];
}

void Raidat::setKesto(int i, float kesto)
{
    this->kesto[i] = kesto;
}

void Raidat::setNimi(int i, string nimi)
{
    this->nimi[i] = nimi;
}

void Raidat::tulostaTiedot(int lkm){
	for(int i=0; i<lkm; i++){
		cout << i+1 << ". " << nimi[i] << ", " << kesto[i] << endl;
	}
}





