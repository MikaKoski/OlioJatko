/*
 * Tallenne.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#include "Tallenne.h"
#include <string>

Tallenne::Tallenne(){

	std::cout << "Tallenteen nimi?: \n";
	cin >> ws;
	getline(cin, nimi);

}

string Tallenne::getNimi() const
{
    return nimi;
}

int Tallenne::getNumero() const
{
    return numero;
}

void Tallenne::setNimi(string nimi)
{
    this->nimi = nimi;
}

void Tallenne::setNumero(int numero)
{
    this->numero = numero;
}

Tallenne::~Tallenne(){

}


