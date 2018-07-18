/*
 * ContextCls.h
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CONTEXTCLS_H_
#define CONTEXTCLS_H_

#include "StrategyIfc.h"

class ContextCls {
public:
	ContextCls();
	virtual ~ContextCls();
	ContextCls(StrategyIfc *strategy);
	int executeStrategy(int num1, int num2);
private:
	StrategyIfc *strategy;
};

#endif /* CONTEXTCLS_H_ */
