/*
 * main.cpp
 *
 *  Created on: 18 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ContextCls.h"
#include "OperationAddCls.h"
#include "OperationSubstractCls.h"
#include "OperationMultiplyCls.h"


int main(){
	StrategyIfc *opAdd = new OperationAddCls();
	ContextCls *context = new ContextCls(opAdd);
	printf("\n10 + 5 = %d"
			,context->executeStrategy(10, 5));


	StrategyIfc *opSubs = new OperationSubstractCls();
	context = new ContextCls(opSubs);
	printf("\n10 - 5 = %d"
				,context->executeStrategy(10, 5));

	StrategyIfc *opMulti = new OperationMultiplyCls();
	context = new ContextCls(opMulti);
	printf("\n10 * 5 = %d"
				,context->executeStrategy(10, 5));
}

