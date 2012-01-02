/*
 * ElokuvaTallenne.h
 *
 *  Created on: Dec 27, 2011
 *      Author: mika
 */

#ifndef ELOKUVATALLENNE_H_
#define ELOKUVATALLENNE_H_

#include "Tallenne.h"

class ElokuvaTallenne : public Tallenne {
private:
	string origNimi;
	int julkaisuVuosi;
	string tyylilaji;
	string ohjaaja;
	string formaatti;
	string kesto;
public:
	ElokuvaTallenne();
	virtual ~ElokuvaTallenne();
	void tulostaTiedot();
    string getFormaatti() const;
    int getJulkaisuVuosi() const;
    string getKesto() const;
    string getNimi() const;
    string getOhjaaja() const;
    string getOrigNimi() const;
    string getTyylilaji() const;
    void setFormaatti(string formaatti);
    void setJulkaisuVuosi(int julkaisuVuosi);
    void setKesto(float kesto);
    void setNimi(string nimi);
    void setOhjaaja(string ohjaaja);
    void setOrigNimi(string origNimi);
    void setTyylilaji(string tyylilaji);
};


#endif /* ELOKUVATALLENNE_H_ */
