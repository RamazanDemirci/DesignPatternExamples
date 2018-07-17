/*
 * FutbolTakipci.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "FutbolTakipci.h"
#include "SporHaberi.h"
#include "Haber.h"

FutbolTakipci::FutbolTakipci() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
}

FutbolTakipci::~FutbolTakipci() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

FutbolTakipci::FutbolTakipci(std::string isim){
	//printf("\n%s", __FUNCTION__);
	this->misim = isim;
}

void FutbolTakipci::update(SporHaberi *sporHaberi){
	//printf("\n%s", __FUNCTION__);

	Haber *nHaber = sporHaberi->getHaber();
	printf("\n--------------------------");
	printf("\n%s isimli takipçiye giden Haber; \nBaþlýk : %s, \nHaber Detayý : %s"
				, this->misim.c_str()
				, sporHaberi->getHaber()->getBaslik()
				, sporHaberi->getHaber()->getAciklama());
}
