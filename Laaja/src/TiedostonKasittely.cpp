/*
 * TiedostonKasittely.cpp
 *
 *  Created on: Dec 28, 2011
 *      Author: mika
 */

#include "TiedostonKasittely.h"


TiedostonKasittely::TiedostonKasittely() {
	tiedostoNimi = "tallenneArkisto.dat";

}
TiedostonKasittely::~TiedostonKasittely() {

}
void TiedostonKasittely::kirjoitaTiedostoon(MusiikkiTallenneCD *mtcd) {
	ofstream tallennus("tallenneArkisto.dat", ios_base::app);
	if(!tallennus.is_open()){
		cout << "Tiedostovirhe" << endl;

	}else{
	tallennus << "Tyyppi: " << mtcd->getLevyTyyppi() << "\n";
	tallennus << "Bandi/Artisti: " << mtcd->getBandiTaiArtisti() << "\n";
	tallennus << "Levyn nimi: " << mtcd->getNimi() << "\n";
	tallennus << "Tyylilaji: " << mtcd->getTyylilaji() << "\n";
	tallennus << "Kokonaiskesto: " << mtcd->getKokonaisKesto();
	tallennus << ", Raitojen lukumaara: " << mtcd->getRaitojenLkm() << "\n";
	tallennus << "Raidat:\n";
		for (int i = 0; i < mtcd->getRaitojenLkm(); i++) {
			tallennus << "\t" << i + 1 << ". " << mtcd->getRaidat().getNimi(i) << ", "
					<< mtcd->getRaidat().getKesto(i) << "\n";
		}
	tallennus << "*\n";
	cout << "\nTiedot tallennettu" << endl;
	tallennus.close();
	}

}
void TiedostonKasittely::kirjoitaTiedostoon(MusiikkiTallenneLP *mtlp) {
	ofstream tallennus("tallenneArkisto.dat", ios_base::app);
	if(!tallennus.is_open()){
		cout << "Tiedostovirhe" << endl;

	}else{
	tallennus << "Tyyppi: " << mtlp->getLevyTyyppi() << "\n";
	tallennus << "Bandi/Artisti: " << mtlp->getBandiTaiArtisti() << "\n";
	tallennus << "Levyn nimi: " << mtlp->getNimi() << "\n";
	tallennus << "Tyylilaji: " << mtlp->getTyylilaji() << "\n";
	tallennus << "Kokonaiskesto: " << mtlp->getKokonaisKestoA() + mtlp->getKokonaisKestoB()<< "\n";
	tallennus << "A-puoli, kesto: " << mtlp->getKokonaisKestoA() << endl;
		for (int i = 0; i < mtlp->getRaitojenLkmA(); i++) {
			tallennus << "\t" << i + 1 << ". " << mtlp->getApuoli().getNimi(i) << ", "
					<< mtlp->getApuoli().getKesto(i) << "\n";
		}
	tallennus << "B-puoli, kesto: " << mtlp->getKokonaisKestoB() << endl;
		for (int i = 0; i < mtlp->getRaitojenLkmB(); i++) {
			tallennus << "\t" << i + 1 << ". " << mtlp->getBpuoli().getNimi(i) << ", "
					<< mtlp->getBpuoli().getKesto(i) << "\n";
			}
	tallennus << "*\n";
	cout << "\nTiedot tallennettu" << endl;
	tallennus.close();
	}

}
void TiedostonKasittely::kirjoitaTiedostoon(MusiikkiTallenneMiniDisc *mtmd) {
	ofstream tallennus("tallenneArkisto.dat", ios_base::app);
	if(!tallennus.is_open()){
		cout << "Tiedostovirhe" << endl;

	}else{
	tallennus << "Tyyppi: " << mtmd->getLevyTyyppi() << "\n";
	tallennus << "Bandi/Artisti: " << mtmd->getBandiTaiArtisti() << "\n";
	tallennus << "Levyn nimi: " << mtmd->getNimi() << "\n";
	tallennus << "Tyylilaji: " << mtmd->getTyylilaji() << "\n";
	tallennus << "Kokonaiskesto: " << mtmd->getKokonaisKesto() << "\n";
	tallennus << "Kuvaus: " << mtmd->getKuvaus() << "\n";
	tallennus << "Indeksien lukumaara: " << mtmd->getIndeksienLkm() << "\n";
	tallennus << "Raidat:\n";
		for (int i = 0; i < mtmd->getIndeksienLkm(); i++) {
			tallennus << "\t" << i + 1 << ". " << mtmd->getRaidat().getNimi(i) << ", "
					<< mtmd->getRaidat().getKesto(i) << "\n";
		}
	tallennus << "*\n";
	cout << "\nTiedot tallennettu" << endl;
	tallennus.close();
	}


}

void TiedostonKasittely::kirjoitaTiedostoon(ElokuvaTallenne *elokuva) {
	ofstream tallennus("tallenneArkisto.dat", ios_base::app);
	if(!tallennus.is_open()){
		cout << "Tiedostovirhe" << endl;

	}else{
	tallennus << "Formaatti: " << elokuva->getFormaatti() << "\n";
	tallennus << "Elokuvan nimi: " << elokuva->getNimi() << "\n";
	tallennus << "Alkuperainen nimi: " << elokuva->getOrigNimi() << "\n";
	tallennus << "Julkaisuvuosi: " << elokuva->getJulkaisuVuosi() << "\n";
	tallennus << "Ohjaus: " << elokuva->getOhjaaja() << "\n";
	tallennus << "Tyylilaji: " << elokuva->getTyylilaji() << "\n";
	tallennus << "Kestoaika: " << elokuva->getKesto() << " tuntia\n";
	tallennus << "*\n";
	cout << "\nTiedot tallennettu" << endl;
	tallennus.close();
	}
}

void TiedostonKasittely::kirjoitaTiedostoon(DataTallenne *data){
	ofstream tallennus("tallenneArkisto.dat", ios_base::app);
	if(!tallennus.is_open()){
		cout << "Tiedostovirhe" << endl;

	}else{
	tallennus << "Formaatti: " << data->getFormaatti() << "\n";
	tallennus << "Datalevyn nimi: " << data->getNimi() << "\n";
	tallennus << "Levyn sisalto: " << data->getKuvaus() << "\n";
	tallennus << "Tallennuskapasiteetti: " << data->getTallennuskapasiteetti() << "\n";
	tallennus << "*\n";
	cout << "\nTiedot tallennettu" << endl;
	tallennus.close();
	}

}

void TiedostonKasittely::lueTiedostosta(){
	int lukumaara = 0;
	char merkki;
	ifstream luku("tallenneArkisto.dat", ios_base::binary);
	if(!luku.is_open()){
		cout << "Tiedostovirhe" << endl;
	}else{
		cout << "----------------------" << endl;
		cout << "\nArkiston tallenteet:\n" << endl;
		do{
			luku.read((char *)&merkki, sizeof(char));
			cout << merkki;

			if(luku.peek()=='*'){
				lukumaara++;
			}
		}while(luku.peek() != EOF);
	}
	cout << "Tallenteita arkistossa " << lukumaara << " kpl." << endl;
}

