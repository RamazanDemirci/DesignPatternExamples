/*
 * NutsToppingCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "NutsToppingCls.h"

NutsToppingCls::NutsToppingCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

NutsToppingCls::~NutsToppingCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

NutsToppingCls::NutsToppingCls(ComponentIfc *input){
//	printf("\n%s", __FUNCTION__);
	this->input = input;
}

void NutsToppingCls::addTopping() {
//	printf("\n%s", __FUNCTION__);
	this->input->addTopping();	//decorate others first
	printf("\nNuts Topping added");
}
