/*
 * EngineCls.cpp
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#include "stdio.h"
#include "EngineCls.h"

EngineCls::EngineCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

EngineCls::~EngineCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void EngineCls::accept(VisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	visitor->visit(this);
}
