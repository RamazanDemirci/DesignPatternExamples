/*
 * BuyerCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "BuyerCls.h"

BuyerCls::BuyerCls() {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
	this->mediator = mediator;
	this->name = name;
}

BuyerCls::BuyerCls(MediatorIfc *mediator, std::string name) {
	// TODO Auto-generated constructor stub
	//printf("\n%s", __FUNCTION__);
	this->mediator = mediator;
	this->name = name;
}

BuyerCls::~BuyerCls() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

