/*
 * MusiikkiTallenneCD.h
 *
 *  Created on: Dec 22, 2011
 *      Author: mika
 */

#ifndef MUSIIKKITALLENNECD_H_
#define MUSIIKKITALLENNECD_H_

#include "MusiikkiTallenne.h"
#include "Raidat.h"

class MusiikkiTallenneCD : public MusiikkiTallenne{
private:
	string levyTyyppi;
	int raitojenLkm;
	float kokonaisKesto;
	Raidat raidat;
public:
	MusiikkiTallenneCD();
	virtual ~MusiikkiTallenneCD();
	void asetaRaitojenTiedot();
	void tulostaTiedot();
    float getKokonaisKesto() const;
    string getLevyTyyppi() const;
    Raidat getRaidat() const;
    int getRaitojenLkm() const;
    void setKokonaisKesto(float kokonaisKesto);
    void setLevyTyyppi(string levyTyyppi);
    void setRaidat(Raidat raidat);
    void setRaitojenLkm(int raitojenLkm);
};


#endif /* MUSIIKKITALLENNECD_H_ */
