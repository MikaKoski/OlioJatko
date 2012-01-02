/*
 * TiedostonKasittely.h
 *
 *  Created on: Dec 28, 2011
 *      Author: mika
 */

#ifndef TIEDOSTONKASITTELY_H_
#define TIEDOSTONKASITTELY_H_

#include <fstream>
#include <iostream>
#include "MusiikkiTallenneCD.h"
#include "MusiikkiTallenneLP.h"
#include "MusiikkiTallenneMiniDisc.h"
#include "ElokuvaTallenne.h"
#include "DataTallenne.h"

using namespace std;

class TiedostonKasittely{
private:
	string tiedostoNimi;

public:
	TiedostonKasittely();
	~TiedostonKasittely();
	void kirjoitaTiedostoon(MusiikkiTallenneCD *mtcd);
	void kirjoitaTiedostoon(MusiikkiTallenneLP *mtlp);
	void kirjoitaTiedostoon(MusiikkiTallenneMiniDisc *mtmd);
	void kirjoitaTiedostoon(ElokuvaTallenne *elokuva);
	void kirjoitaTiedostoon(DataTallenne *data);
	void lueTiedostosta();
};


#endif /* TIEDOSTONKASITTELY_H_ */
