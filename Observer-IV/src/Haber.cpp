/*
 * Haber.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include "Haber.h"

Haber::Haber() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
}

Haber::~Haber() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

Haber::Haber(std::string baslik, std::string aciklama){
	//printf("\n%s", __FUNCTION__);
	this->mBaslik = baslik;
	this->mAciklama = aciklama;
}

const char* Haber::getBaslik(){
	//printf("\n%s", __FUNCTION__);
	return this->mBaslik.c_str();
}

void Haber::setBaslik(std::string mBaslik){
	//printf("\n%s", __FUNCTION__);
	this->mBaslik = mBaslik;
}

const char* Haber::getAciklama(){
	//printf("\n%s", __FUNCTION__);
	return this->mAciklama.c_str();
}

void Haber::setAciklama(std::string mAciklama){
	printf("\n%s", __FUNCTION__);
	this->mAciklama = mAciklama;
}
