/*
 * RobotCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "RobotCls.h"

RobotCls* RobotCls::self = NULL;

RobotCls::RobotCls() {
	// TODO Auto-generated constructor stub

}

RobotCls::~RobotCls() {
	// TODO Auto-generated destructor stub
}

std::string RobotCls::getName(){
	return name;
}

void RobotCls::setName(std::string name){
	this->name = name;
}

RobotCls* RobotCls::Instance(){
	if(self == NULL){	//create instance only if we don't have one
		self = new RobotCls();
	}
	return self;
}
