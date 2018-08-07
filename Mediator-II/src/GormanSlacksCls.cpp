/*
 * GormanSlacksCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "GormanSlacksCls.h"

GormanSlacksCls::GormanSlacksCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

GormanSlacksCls::GormanSlacksCls(MediatorIfc *mediator){
//	printf("\n%s", __FUNCTION__);
	this->mediator = mediator;
	printf("\n\"Gorman Slacks\" signed up for the exchange");
}

GormanSlacksCls::~GormanSlacksCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

