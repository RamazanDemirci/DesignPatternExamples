	/*
 * AuctionBuyerCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef AUCTIONBUYERCLS_H_
#define AUCTIONBUYERCLS_H_

#include "BuyerCls.h"
#include "MediatorIfc.h"

class AuctionBuyerCls : public BuyerCls{
	typedef BuyerCls base;	/*represent the base(parent) class*/

public:
	AuctionBuyerCls();
	AuctionBuyerCls(MediatorIfc *mediator, std::string name);
	virtual ~AuctionBuyerCls();
	void bid(int price);
	void cancelTheBid();
};

#endif /* AUCTIONBUYERCLS_H_ */
