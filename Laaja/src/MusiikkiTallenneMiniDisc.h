/*
 * MusiikkiTallenneMiniDisc.h
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#ifndef MUSIIKKITALLENNEMINIDISC_H_
#define MUSIIKKITALLENNEMINIDISC_H_

#include "MusiikkiTallenne.h"
#include "Raidat.h"

class MusiikkiTallenneMiniDisc : public MusiikkiTallenne {
private:
	string levyTyyppi;
	string kuvaus;
	int indeksienLkm;
	float kokonaisKesto;
	Raidat raidat;
public:
	MusiikkiTallenneMiniDisc();
	virtual ~MusiikkiTallenneMiniDisc();
	void asetaRaitojenTiedot();
	void tulostaTiedot();
    int getIndeksienLkm() const;
    Raidat getRaidat() const;
    string getKuvaus() const;
    string getLevyTyyppi() const;
    void setIndeksienLkm(int indeksienLkm);
    void setRaidat(Raidat indeksit);
    void setKuvaus(string kuvaus);
    float getKokonaisKesto() const;
    void setKokonaisKesto(float kokonaisKesto);
};


#endif /* MUSIIKKITALLENNEMINIDISC_H_ */
