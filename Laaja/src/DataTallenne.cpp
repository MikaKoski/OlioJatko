/*
 * DataTallenne.cpp
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#include "DataTallenne.h"

DataTallenne::DataTallenne(){
	cout << "Kuvaus Levyn sisallosta?: " << endl;
	cin >> ws;
	getline(cin, kuvaus);
	cout << "Levyn tallennuskapasiteetti?(MB): " << endl;
	cin >> tallennuskapasiteetti;
}

DataTallenne::~DataTallenne(){

}

string DataTallenne::getFormaatti() const
{
    return formaatti;
}

float DataTallenne::getTallennuskapasiteetti() const
{
    return tallennuskapasiteetti;
}

void DataTallenne::setFormaatti(string formaatti)
{
    this->formaatti = formaatti;
}

string DataTallenne::getKuvaus() const
{
    return kuvaus;
}

void DataTallenne::setTallennuskapasiteetti(float tallennuskapasiteetti)
{
    this->tallennuskapasiteetti = tallennuskapasiteetti;
}

void DataTallenne::tulostaTiedot(){
	cout << "Formaatti: " << formaatti << endl;
	cout << "Datalevyn nimi: " << nimi << endl;
	cout << "Levyn sisalto: " << kuvaus << endl;
	cout << "Tallennuskapasiteetti: " << tallennuskapasiteetti << endl;
}




