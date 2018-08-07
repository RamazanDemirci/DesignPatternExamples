/*
 * DimmerLightOffCommandCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "DimmerLightOffCommandCls.h"

DimmerLightOffCommandCls::DimmerLightOffCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

DimmerLightOffCommandCls::~DimmerLightOffCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

DimmerLightOffCommandCls::DimmerLightOffCommandCls(LightCls *light){
//	printf("\n%s", __FUNCTION__);
	this->light = light;
	this->prevLevel = 100;
}

void DimmerLightOffCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->prevLevel = this->light->getLevel();
}

void DimmerLightOffCommandCls::undo(){
//	printf("\n%s", __FUNCTION__);
	this->light->dim(prevLevel);
}

