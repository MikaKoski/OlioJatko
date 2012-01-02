/*
 * DataTallenne.h
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#ifndef DATATALLENNE_H_
#define DATATALLENNE_H_

#include "Tallenne.h"
#include "Raidat.h"

class DataTallenne : public Tallenne {
private:
	string formaatti;
	string kuvaus;
	float tallennuskapasiteetti;
public:
	DataTallenne();
	virtual ~DataTallenne();
	void tulostaTiedot();
    string getFormaatti() const;
    float getTallennuskapasiteetti() const;
    void setFormaatti(string formaatti);
    void setTallennuskapasiteetti(float tallennuskapasiteetti);
    void setTiedostot(Raidat tiedostot);
    string getKuvaus() const;
    void setKuvaus(string kuvaus);
};



#endif /* DATATALLENNE_H_ */
