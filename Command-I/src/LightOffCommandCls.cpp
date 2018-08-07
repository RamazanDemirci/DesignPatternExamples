/*
 * LightOffCommandCls.cpp
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#include "LightOffCommandCls.h"

LightOffCommandCls::LightOffCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

LightOffCommandCls::~LightOffCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

LightOffCommandCls::LightOffCommandCls(LightCls *light) {
//	printf("\n%s", __FUNCTION__);
	this->light = light;
}

void LightOffCommandCls::execute(){
//	printf("\n%s", __FUNCTION__);
	this->prevLevel = this->light->getLevel();
	this->light->on();
}

void LightOffCommandCls::undo(){
//	printf("\n%s", __FUNCTION__);
	light->dim(this->prevLevel);
}
