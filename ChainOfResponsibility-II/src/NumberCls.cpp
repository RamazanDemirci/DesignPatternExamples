/*
 * NumberCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "NumberCls.h"

NumberCls::NumberCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

NumberCls::NumberCls(int number){
//	printf("\n%s", __FUNCTION__);
	this->number = number;
}

NumberCls::~NumberCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

int NumberCls::getNumber(){
//	printf("\n%s", __FUNCTION__);
	return this->number;
}

