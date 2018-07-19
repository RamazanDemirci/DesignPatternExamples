/*
 * main.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "NegativeProcessorCls.h"
#include "PositiveProcessorCls.h"
#include "ZeroProcessorCls.h"
#include "NumberCls.h"

int main(){

	//configure Chain of Responsibility
	ChainIfc *c1 = new NegativeProcessorCls();
	ChainIfc *c2 = new ZeroProcessorCls();
	ChainIfc *c3 = new PositiveProcessorCls();

	c1->setNext(c2);
	c2->setNext(c3);

	//calling chain of responsibility
	c1->process(new NumberCls(90) );
	c1->process(new NumberCls(-50) );
	c1->process(new NumberCls(0) );
	c1->process(new NumberCls(91) );

}

