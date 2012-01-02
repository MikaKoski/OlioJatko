/*
 * MusiikkiTallenneLP.h
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#ifndef MUSIIKKITALLENNELP_H_
#define MUSIIKKITALLENNELP_H_

#include "MusiikkiTallenne.h"
#include "Raidat.h"

class MusiikkiTallenneLP : public MusiikkiTallenne {
private:
	string levyTyyppi;
	int raitojenLkmA;
	int raitojenLkmB;
	float kokonaisKestoA;
	float kokonaisKestoB;
	Raidat aPuoli;
	Raidat bPuoli;
public:
	MusiikkiTallenneLP();
	virtual ~MusiikkiTallenneLP();
	void asetaRaitojenTiedot(int id);
	void tulostaTiedot();
    float getKokonaisKestoA() const;
    float getKokonaisKestoB() const;
    string getLevyTyyppi() const;
    Raidat getApuoli() const;
    Raidat getBpuoli() const;
    int getRaitojenLkmA() const;
    int getRaitojenLkmB() const;
    void setKokonaisKestoA(float kokonaisKestoA);
    void setKokonaisKestoB(float kokonaisKestoB);
    void setLevyTyyppi(string levyTyyppi);
    void setApuoli(Raidat puoli);
    void setBpuoli(Raidat puoli);
    void setRaitojenLkmA(int raitojenLkmA);
    void setRaitojenLkmB(int raitojenLkmB);

};



#endif /* MUSIIKKITALLENNELP_H_ */
