/*
 * Raidat.h
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#ifndef RAIDAT_H_
#define RAIDAT_H_

#include <iostream>

using namespace std;

class Raidat{
private:
	string nimi[20];
	float kesto[20];
public:
	Raidat();
	~Raidat();
	void tulostaTiedot(int lkm);
    float getKesto(int i);
    string getNimi(int i);
    void setKesto(int i, float kesto);
    void setNimi(int i, string nimi);

};




#endif /* RAIDAT_H_ */
