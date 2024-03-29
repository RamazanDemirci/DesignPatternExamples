/*
 * AuctionBuyerCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "AuctionBuyerCls.h"

AuctionBuyerCls::AuctionBuyerCls() {
	//printf("\n%s", __FUNCTION__);
	// TODO Auto-generated constructor stub
}

AuctionBuyerCls::AuctionBuyerCls(MediatorIfc *mediator, std::string name){
	//printf("\n%s", __FUNCTION__);
	base::mediator = mediator;
	base::name = name;
}

AuctionBuyerCls::~AuctionBuyerCls() {
	// TODO Auto-generated destructor stub
	//printf("\n%s", __FUNCTION__);
}

void AuctionBuyerCls::bid(int price){
	//printf("\n%s", __FUNCTION__);
	BuyerCls::price = price;
	printf("\nBuyer \"%s\" offer %d $"
				, BuyerCls::name.c_str()
				, BuyerCls::price);
}

void AuctionBuyerCls::cancelTheBid(){
	//printf("\n%s", __FUNCTION__);
	BuyerCls::price = -1;
}
