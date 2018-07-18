/*
 * StockOfferCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "StockOfferCls.h"

StockOfferCls::StockOfferCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

StockOfferCls::StockOfferCls(int numOfShares, std::string stockSymbol, int colleaguCode){
//	printf("\n%s", __FUNCTION__);
	this->numOfShares = numOfShares;
	this->stockSymbol = stockSymbol;
	this->colleaguCode = colleaguCode;
}

StockOfferCls::~StockOfferCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

int StockOfferCls::getNumOfShares(){
//	printf("\n%s", __FUNCTION__);
	return this->numOfShares;
}

std::string StockOfferCls::getStockSymbol(){
//	printf("\n%s", __FUNCTION__);
	return this->stockSymbol;
}

int StockOfferCls::getColleaguCode(){
//	printf("\n%s", __FUNCTION__);
	return this->colleaguCode;
}

