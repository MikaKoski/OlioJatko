/*
 * Tallenne.h
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#ifndef TALLENNE_H_
#define TALLENNE_H_
#include <iostream>

using namespace std;

class Tallenne {
protected:
	string nimi;
	int numero;
public:
	Tallenne();
	virtual ~Tallenne();
    string getNimi() const;
    int getNumero() const;
    void setNimi(string nimi);
    void setNumero(int numero);
};




#endif /* TALLENNE_H_ */
