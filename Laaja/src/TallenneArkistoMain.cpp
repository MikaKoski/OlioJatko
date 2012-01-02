/*
 * TallenneArkistoMain.cpp
 *
 *  Created on: Dec 28, 2011
 *      Author: mika
 */

#include "DataTallenne.h"
#include "ElokuvaTallenne.h"
#include "MusiikkiTallenneCD.h"
#include "MusiikkiTallenneLP.h"
#include "MusiikkiTallenneMiniDisc.h"
#include "KayttoLiittyma.h"
#include "TiedostonKasittely.h"

int main(){
	int valinta;
	KayttoLiittyma *KL = new KayttoLiittyma();
	TiedostonKasittely *tiedKas = new TiedostonKasittely();
	do{
	valinta = 0;
	valinta	= KL->paaValikko();
	switch(valinta){
	case 1 :
	{
		int laji = KL->lisaysValikko();
		if(laji == 1){
			int tyyppi;
			tyyppi = KL->levyTyyppiValikko();
			if(tyyppi == 1){
				MusiikkiTallenneCD *mtcd = new MusiikkiTallenneCD();
				mtcd->asetaRaitojenTiedot();
				mtcd->tulostaTiedot();
				mtcd->getRaidat().tulostaTiedot(mtcd->getRaitojenLkm());
				if(KL->kysyVarmistus()==true){
					tiedKas->kirjoitaTiedostoon(mtcd);
				}

				delete mtcd;
			}
			if(tyyppi == 2){
				int id = 0;
				MusiikkiTallenneLP *mtlp = new MusiikkiTallenneLP();
				mtlp->asetaRaitojenTiedot(id);
				id++;
				mtlp->asetaRaitojenTiedot(id);
				mtlp->tulostaTiedot();
				cout << "A-puoli:" << endl;
				mtlp->getApuoli().tulostaTiedot(mtlp->getRaitojenLkmA());
				cout << "B-puoli:" << endl;
				mtlp->getBpuoli().tulostaTiedot(mtlp->getRaitojenLkmB());
				if(KL->kysyVarmistus()==true){
					tiedKas->kirjoitaTiedostoon(mtlp);
				}
				delete mtlp;
			}
			if(tyyppi == 3){
				MusiikkiTallenneMiniDisc *mtmd = new MusiikkiTallenneMiniDisc();
				mtmd->asetaRaitojenTiedot();
				mtmd->tulostaTiedot();
				mtmd->getRaidat().tulostaTiedot(mtmd->getIndeksienLkm());
				if(KL->kysyVarmistus()==true){
					tiedKas->kirjoitaTiedostoon(mtmd);
				}
				delete mtmd;
			}
		}
		if(laji == 2){
			ElokuvaTallenne *elokuva = new ElokuvaTallenne();
			int formaatti = KL->elokuvaFormaattiValikko();
			if(formaatti == 1){
				elokuva->setFormaatti("DVD");
			}
			if(formaatti == 2){
				elokuva->setFormaatti("BluRay");
			}
			elokuva->tulostaTiedot();
			if(KL->kysyVarmistus()==true){
				tiedKas->kirjoitaTiedostoon(elokuva);
			}
			delete elokuva;
		}
		if(laji == 3){
			DataTallenne *data = new DataTallenne();
			int formaatti = KL->dataFormaattiValikko();
			if(formaatti == 1){
				data->setFormaatti("CD-ROM");
			}
			if(formaatti == 2){
				data->setFormaatti("CD-RW");
			}
			if(formaatti == 3){
				data->setFormaatti("DVD-ROM");
			}
			if(formaatti == 4){
				data->setFormaatti("DVD-RW");
			}
			data->tulostaTiedot();
			if(KL->kysyVarmistus()==true){
				tiedKas->kirjoitaTiedostoon(data);
			}
			delete data;
		}
	}
		break;
	case 2 :
	{
		tiedKas->lueTiedostosta();
	}

		break;

	}
	}while(valinta != 0);


	delete KL;
	delete tiedKas;
	return 0;
}


