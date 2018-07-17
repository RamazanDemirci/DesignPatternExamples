/*
 * AuctionMediatorCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include <utility>
#include <memory>
#include <iostream>
#include "AuctionMediatorCls.h"

AuctionMediatorCls::AuctionMediatorCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

AuctionMediatorCls::~AuctionMediatorCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

void AuctionMediatorCls::addBuyer(BuyerCls *buyer){
	printf("\n%s", __FUNCTION__);
	this->buyerList.push_back(buyer);
}

void AuctionMediatorCls::findHighestBidder(){
	printf("\n%s", __FUNCTION__);
	int maxBid = 0;
	BuyerCls *winner = nullptr;
	for (BuyerCls *b : this->buyerList) {
		if (b->price > maxBid) {
			maxBid = b->price;
			winner = b;
		}
	}

	if(winner != nullptr)
	{
		printf("The auction winner is %s. He paid %d $ for the item.",
				winner->name.c_str(), winner->price);
	}
}

