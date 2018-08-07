/*
 * LightOnCommandCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "LightOnCommandCls.h"

LightOnCommandCls::LightOnCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

LightOnCommandCls::~LightOnCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}
LightOnCommandCls::LightOnCommandCls(LightCls *light){
//	printf("\n%s", __FUNCTION__);
	this->light = light;
}

void LightOnCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->prevLevel = this->light->getLevel();
	this->light->off();
}

void LightOnCommandCls::undo(){
//	printf("\n%s", __FUNCTION__);
	this->light->dim(prevLevel);
}

