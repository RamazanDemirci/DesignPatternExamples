/*
 * PositiveProcessorCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */
#include <stdio.h>
#include "PositiveProcessorCls.h"

PositiveProcessorCls::PositiveProcessorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

PositiveProcessorCls::~PositiveProcessorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void PositiveProcessorCls::setNext(ChainIfc *chain) {
//	printf("\n%s", __FUNCTION__);
	this->nextInChain = chain;
}

void PositiveProcessorCls::process(NumberCls *request) {
//	printf("\n%s", __FUNCTION__);

	if(request->getNumber() > 0)
		printf("\nPositiveProcessor : %d", request->getNumber());
	else
		this->nextInChain->process(request);
}
