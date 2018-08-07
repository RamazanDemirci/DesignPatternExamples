/*
 * DimmerLightOnCommandCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "DimmerLightOnCommandCls.h"

DimmerLightOnCommandCls::DimmerLightOnCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

DimmerLightOnCommandCls::~DimmerLightOnCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

DimmerLightOnCommandCls::DimmerLightOnCommandCls(LightCls *light){
//	printf("\n%s", __FUNCTION__);
	this->light = light;
}

void DimmerLightOnCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->prevLevel = this->light->getLevel();
	light->dim(75);
}

void DimmerLightOnCommandCls::undo(){
//	printf("\n%s", __FUNCTION__);
	this->light->dim(prevLevel);
}

