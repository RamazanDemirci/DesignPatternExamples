/*
 * SporHaberi.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "SporHaberi.h"
#include "Haber.h"

SporHaberi::SporHaberi() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
}

SporHaberi::~SporHaberi() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

void SporHaberi::subscribe(Takipci *sporHaberi){
	//printf("\n%s", __FUNCTION__);
	takipciler.push_back(sporHaberi);
}

void SporHaberi::unsubscribe(Takipci* sporHaberi){
	//printf("\n%s", __FUNCTION__);
	takipciler.erase(std::remove(takipciler.begin(), takipciler.end(), sporHaberi), takipciler.end());
}

void SporHaberi::notifyChanges(){
	//printf("\n%s", __FUNCTION__);

	for(std::vector<Takipci*>::const_iterator iter = takipciler.begin(); iter != takipciler.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(this);
		}
	}
}

void SporHaberi::addNewHaber(Haber *haber){
	//printf("\n%s", __FUNCTION__);

	haberler.push_back(haber);
	this->mHaber = haber;
	notifyChanges();

}

Haber* SporHaberi::getHaber(){
	//printf("\n%s", __FUNCTION__);
	return this->mHaber;
}
