/*
 * MusiikkiTallenne.h
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#ifndef MUSIIKKITALLENNE_H_
#define MUSIIKKITALLENNE_H_

#include <iostream>
#include "Tallenne.h"

class MusiikkiTallenne : public Tallenne{
protected:
	string tyylilaji;
	string bandiTaiArtisti;
public:
	MusiikkiTallenne();
	virtual ~MusiikkiTallenne();
    string getBandiTaiArtisti() const;
    string getTyylilaji() const;
    void setBandiTaiArtisti(string bandiTaiArtisti);
    void setTyylilaji(string tyylilaji);
};




#endif /* MUSIIKKITALLENNE_H_ */
