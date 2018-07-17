/*
 * AuctionMediatorCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef AUCTIONMEDIATORCLS_H_
#define AUCTIONMEDIATORCLS_H_

#include <vector>
#include "MediatorIfc.h"
#include "BuyerCls.h"

class AuctionMediatorCls : public MediatorIfc {
public:
	AuctionMediatorCls();
	virtual ~AuctionMediatorCls();
	void addBuyer(BuyerCls *buyer);
	void findHighestBidder();
private:
	std::vector<BuyerCls*> buyerList;
};

#endif /* AUCTIONMEDIATORCLS_H_ */
