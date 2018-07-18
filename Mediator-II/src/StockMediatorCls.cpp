/*
 * StockMediatorCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "StockMediatorCls.h"

StockMediatorCls::StockMediatorCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
	colleagueCodes = 0;
}

StockMediatorCls::~StockMediatorCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void StockMediatorCls::saleOffer(std::string stock, int shares, int colleagueCode){
//	printf("\n%s", __FUNCTION__);

	bool stockSold = false;

	std::for_each(this->stockSellList.begin(), this->stockSellList.end(),
			[=, &stockSold](StockOfferCls *item) {
				if( (item->getStockSymbol().c_str() == stock) && (item->getNumOfShares() == shares ) ) {
					printf("\n%s shares of %s sold to colleague code "
							, shares
							, item->getColleaguCode());

					this->stockBuyList.erase(std::remove(this->stockBuyList.begin(), this->stockBuyList.end(), item), this->stockBuyList.end());
					stockSold = true;
				}

				if(stockSold) {return;}
			});

	if (!stockSold) {

		printf("\n%d share of %s remove from inventory", shares, stock.c_str());

		StockOfferCls *newOffering = new StockOfferCls(shares, stock,
				colleagueCode);

		stockSellList.push_back(newOffering);
	}
}

void StockMediatorCls::buyOffer(std::string stock, int shares, int colleagueCode){
//	printf("\n%s", __FUNCTION__);

	bool stockBought = false;

	std::for_each(this->stockBuyList.begin(), this->stockBuyList.end(),
			[=, &stockBought](StockOfferCls *item) {
				if( (item->getStockSymbol().c_str() == stock) && (item->getNumOfShares() == shares ) ) {
					printf("\n%s shares of %s sold to colleague code "
							, shares
							, item->getColleaguCode());

					this->stockSellList.erase(std::remove(this->stockSellList.begin(), this->stockSellList.end(), item), this->stockSellList.end());
					stockBought = true;
				}

				if(stockBought) {return;}
			});

	if (!stockBought) {
		printf("\n%d share of %s added to inventory", shares, stock.c_str());

		StockOfferCls *newOffering = new StockOfferCls(shares, stock,
				colleagueCode);

		stockBuyList.push_back(newOffering);
	}
}

void StockMediatorCls::addColleague(ColleagueCls *colleague){
//	printf("\n%s", __FUNCTION__);
	this->colleagueList.push_back(colleague);
	this->colleagueCodes++;
	colleague->setCollCode(this->colleagueCodes);

}

void StockMediatorCls::getStockOfferings(){
//	printf("\n%s", __FUNCTION__);

	printf("\nStocks for Sale");
	std::for_each(this->stockSellList.begin(), this->stockSellList.end(),
			[](StockOfferCls *item) {

				printf("\n%d of %s"
						, item->getNumOfShares()
						, item->getStockSymbol().c_str());
			});

	printf("\nStocks Buy Offers");
	std::for_each(this->stockBuyList.begin(), this->stockBuyList.end(),
			[](StockOfferCls *item) {
				printf("\n%d of %s"
						, item->getNumOfShares()
						, item->getStockSymbol().c_str());

			});

}

