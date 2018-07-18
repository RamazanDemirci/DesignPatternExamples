/*
 * JTPoormanCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <JTPoormanCls.h>

JTPoormanCls::JTPoormanCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

JTPoormanCls::JTPoormanCls(MediatorIfc *mediator){
//	printf("\n%s", __FUNCTION__);
	this->mediator = mediator;
	printf("\nJT Poorman signed up for the exchange");
}

JTPoormanCls::~JTPoormanCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

