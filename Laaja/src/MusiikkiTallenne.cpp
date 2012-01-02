/*
 * MusiikkiTallenne.cpp
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#include "MusiikkiTallenne.h"
#include <string>

MusiikkiTallenne::MusiikkiTallenne(){


	cout << "Bandi/Artisti?: " << endl;
	cin >> ws;
	getline(cin, bandiTaiArtisti);
	cout << "Tyylilaji?: " << endl;
	cin >> ws;
	getline(cin, tyylilaji);



}

string MusiikkiTallenne::getBandiTaiArtisti() const
{
    return bandiTaiArtisti;
}

string MusiikkiTallenne::getTyylilaji() const
{
    return tyylilaji;
}

void MusiikkiTallenne::setBandiTaiArtisti(string bandiTaiArtisti)
{
    this->bandiTaiArtisti = bandiTaiArtisti;
}

void MusiikkiTallenne::setTyylilaji(string tyylilaji)
{
    this->tyylilaji = tyylilaji;
}

MusiikkiTallenne::~MusiikkiTallenne(){

}


