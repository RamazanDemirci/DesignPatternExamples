/*
 * ZeroProcessorCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ZeroProcessorCls.h"

ZeroProcessorCls::ZeroProcessorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ZeroProcessorCls::~ZeroProcessorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void ZeroProcessorCls::setNext(ChainIfc *chain) {
//	printf("\n%s", __FUNCTION__);
	this->nextInChain = chain;
}

void ZeroProcessorCls::process(NumberCls *request) {
//	printf("\n%s", __FUNCTION__);

	if(request->getNumber() == 0)
		printf("\nZeroProcessor     : %d", request->getNumber());
	else
		this->nextInChain->process(request);

}
