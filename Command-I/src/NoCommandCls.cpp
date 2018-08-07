/*
 * NoCommandCls.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */
#include <stdio.h>
#include "NoCommandCls.h"

NoCommandCls::NoCommandCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

NoCommandCls::~NoCommandCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void NoCommandCls::execute(){
	printf("\n%s", __FUNCTION__);
}

void NoCommandCls::undo(){
	printf("\n%s", __FUNCTION__);
}
