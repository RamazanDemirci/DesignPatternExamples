/*
 * BuyerCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef BUYERCLS_H_
#define BUYERCLS_H_

#include <string>
#include "MediatorIfc.h"

class BuyerCls {
public:
	BuyerCls();
	BuyerCls(MediatorIfc *mediator, std::string name);
	virtual ~BuyerCls();
	virtual void bid(int price) = 0;
	virtual void cancelTheBid() = 0;
public:
	MediatorIfc *mediator;
	std::string name;
	int price;
};

#endif /* BUYERCLS_H_ */
