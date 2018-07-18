/*
 * ContextCls.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include "ContextCls.h"

ContextCls::ContextCls() {
	// TODO Auto-generated constructor stub
}

ContextCls::~ContextCls() {
	// TODO Auto-generated destructor stub
}

ContextCls::ContextCls(StrategyIfc *strategy){
	this->strategy = strategy;
}

int ContextCls::executeStrategy(int num1, int num2){
	return strategy->doOperation(num1, num2);
}
