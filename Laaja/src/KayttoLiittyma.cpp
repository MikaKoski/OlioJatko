/*
 * KayttoLiittyma.cpp
 *
 *  Created on: Dec 28, 2011
 *      Author: mika
 */

#include "KayttoLiittyma.h"
#include <iostream>

using namespace std;

KayttoLiittyma::KayttoLiittyma(){

}

KayttoLiittyma::~KayttoLiittyma(){

}

int KayttoLiittyma::paaValikko(){
	valinta = 0;
	cout << "\n--------------------------" << endl;
	cout << "Tallenne arkisto ohjelma\n" << endl;
	cout << "1. Lisaa uusi tallenne" << endl;
	cout << "2. Nayta tallenteet" << endl;
	cout << "0. Lopetus" << endl;
	cout << "\nValitse jokin vaihtoehdoista: " << endl;
	cin >> ws >> valinta;

	return valinta;
}

int KayttoLiittyma::lisaysValikko(){
	valinta = 0;
	cout << "1. Musiikkitallenne" << endl;
	cout << "2. Elokuvatallenne" << endl;
	cout << "3. Datatallenne" << endl;
	cout << "Valitse tallenne tyyppi: " << endl;
	cin >> ws >> valinta;

	return valinta;
}

int KayttoLiittyma::levyTyyppiValikko(){
	valinta = 0;
	cout << "1. CD" << endl;
	cout << "2. LP" << endl;
	cout << "3. MiniDisc" << endl;
	cout << "Valitse levyn tyyppi: " << endl;
	cin >> ws >> valinta;

	return valinta;
}

int KayttoLiittyma::elokuvaFormaattiValikko(){
	valinta = 0;
	cout << "1. DVD" << endl;
	cout << "2. BluRay" << endl;
	cout << "Valitse levyn formaatti: " << endl;
	cin >> ws >> valinta;

	return valinta;
}

int KayttoLiittyma::dataFormaattiValikko(){
		valinta = 0;
		cout << "1. CD-ROM" << endl;
		cout << "2. CD-RW" << endl;
		cout << "3. DVD-ROM" << endl;
		cout << "4. DVD-RW" << endl;
		cout << "Valitse levyn formaatti: " << endl;
		cin >> ws >> valinta;
		return valinta;
}

bool KayttoLiittyma::kysyVarmistus(){
	char valinta;
	bool tallenna;
	cout << "Haluatko tallentaa tiedot?(k/e): " << endl;
	cin >> ws >> valinta;
	if(valinta == 'k'){
		tallenna = true;
	}
	else{
		tallenna = false;
	}
	return tallenna;
}

