/*
 * main.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "AuctionMediatorCls.h"
#include "BuyerCls.h"
#include "AuctionBuyerCls.h"

int main()
{
	AuctionMediatorCls *mediator = new AuctionMediatorCls();

	BuyerCls *buyer1 = new AuctionBuyerCls(mediator, "Therry Henry");
	BuyerCls *buyer2 = new AuctionBuyerCls(mediator, "Del Pierro");
	BuyerCls *buyer3 = new AuctionBuyerCls(mediator, "Batistuta");

	//Create and add buyers
	mediator->addBuyer(buyer1);
	mediator->addBuyer(buyer2);
	mediator->addBuyer(buyer3);

	printf("\nWelcome to the auction. "
		   "\nTonight we are selling a vacation to Vegas. "
		   "\nplease Bid your offers.");
	printf("\n-----------------------------------------------");
	printf("\nWaiting for the buyer's offers...");

	// Making bids
	buyer1->bid(1800);
	buyer1->bid(2000);
	buyer1->bid(780);
	printf("\n-----------------------------------------------");

	mediator->findHighestBidder();
	/*
	buyer2->cancelTheBid();

	printf("\n%s Has canceled his bid!, in that case");
	mediator->findHighestBidder();
	*/


}

