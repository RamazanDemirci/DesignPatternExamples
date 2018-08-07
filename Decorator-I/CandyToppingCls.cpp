/*
 * CandyToppingCls.cpp
 *
 *  Created on: 4 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "CandyToppingCls.h"

CandyToppingCls::CandyToppingCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

CandyToppingCls::~CandyToppingCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

CandyToppingCls::CandyToppingCls(ComponentIfc *input){
//	printf("\n%s", __FUNCTION__);
	this->input = input;
}

void CandyToppingCls::addTopping(){
//	printf("\n%s", __FUNCTION__);
	this->input->addTopping();	//decorate others first
	printf("\nCandy Topping added");
}
