/*
 * NumberCls.cpp
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "NumberCls.h"

NumberCls::NumberCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

NumberCls::~NumberCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

NumberCls::NumberCls(int value){
	printf("\n%s", __FUNCTION__);
	this->value;
}

void NumberCls::dubble(){
	printf("\n%s", __FUNCTION__);
	this->value = (this->value * 2);
}

void NumberCls::half(){
	printf("\n%s", __FUNCTION__);
	this->value = (this->value / 2);
}

int NumberCls::getValue(){
	printf("\n%s", __FUNCTION__);
	return this->value;
}

MementoCls* NumberCls::createMemento(){
	printf("\n%s", __FUNCTION__);
	return new MementoCls(this->value);
}

void NumberCls::reinstateMemento(MementoCls *mem){
	printf("\n%s", __FUNCTION__);
	this->value = mem->state;
}
