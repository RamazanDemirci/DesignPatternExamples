/*
 * ColleagueCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "ColleagueCls.h"

ColleagueCls::ColleagueCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ColleagueCls::ColleagueCls(MediatorIfc *newMediator){
//	printf("\n%s", __FUNCTION__);
	this->mediator = newMediator;
}

ColleagueCls::~ColleagueCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void ColleagueCls::saleOffer(std::string stock, int shares){
//	printf("\n%s", __FUNCTION__);

	mediator->saleOffer(stock, shares, this->colleagueCode);
}

void ColleagueCls::buyOffer(std::string stock, int shares){
//	printf("\n%s", __FUNCTION__);
	mediator->buyOffer(stock, shares, this->colleagueCode);
}

void ColleagueCls::setCollCode(int collCode){
//	printf("\n%s", __FUNCTION__);
	this->colleagueCode = collCode;
}

