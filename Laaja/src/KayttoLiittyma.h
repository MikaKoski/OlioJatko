/*
 * KayttoLiittyma.h
 *
 *  Created on: Dec 28, 2011
 *      Author: mika
 */

#ifndef KAYTTOLIITTYMA_H_
#define KAYTTOLIITTYMA_H_

class KayttoLiittyma{
private:
	int valinta;
public:
	KayttoLiittyma();
	virtual ~KayttoLiittyma();
	int paaValikko();
	int lisaysValikko();
	int levyTyyppiValikko();
	int elokuvaFormaattiValikko();
	int dataFormaattiValikko();
	bool kysyVarmistus();
};


#endif /* KAYTTOLIITTYMA_H_ */
