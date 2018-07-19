/*
 * NegativeProcessorCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "NegativeProcessorCls.h"

NegativeProcessorCls::NegativeProcessorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

NegativeProcessorCls::~NegativeProcessorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void NegativeProcessorCls::setNext(ChainIfc *chain) {
//	printf("\n%s", __FUNCTION__);
	this->nextInChain = chain;
}

void NegativeProcessorCls::process(NumberCls *request) {
//	printf("\n%s", __FUNCTION__);

	if(request->getNumber() < 0)
		printf("\nNegativeProcessor : %d", request->getNumber());
	else
		this->nextInChain->process(request);
}
