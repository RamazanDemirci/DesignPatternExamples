/*
 * LightCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#include "LightCls.h"

LightCls::LightCls()
	: level(0) {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

LightCls::~LightCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

LightCls::LightCls(std::string location)
	: level(0) {
//	printf("\n%s", __FUNCTION__);
	this->location = location;
}

void LightCls::on(){
//	printf("\n%s", __FUNCTION__);
	this->level = 100;
	printf("\nLight is on");
}

void LightCls::off(){
//	printf("\n%s", __FUNCTION__);
	this->level = 0;
	printf("\nLight is off");
}

void LightCls::dim(int level){
//	printf("\n%s", __FUNCTION__);
	this->level = level;
	if(level == 0){
		off();
	}
	else{
		printf("\nLight is dimmed to %d%", this->level);
	}
}

int LightCls::getLevel(){
//	printf("\n%s", __FUNCTION__);
	return this->level;
}
