/*
 * PeanutToppingCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "PeanutToppingCls.h"

PeanutToppingCls::PeanutToppingCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

PeanutToppingCls::~PeanutToppingCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

PeanutToppingCls::PeanutToppingCls(ComponentIfc *input) {
//	printf("\n%s", __FUNCTION__);
	this->input = input;
}

void PeanutToppingCls::addTopping(){
//	printf("\n%s", __FUNCTION__);
	this->input->addTopping();	//decorate others first
	printf("\nPeanut Topping added");
}
