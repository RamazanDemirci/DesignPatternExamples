/*
 * main.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "StockMediatorCls.h"
#include "GormanSlacksCls.h"
#include "JTPoormanCls.h"

int main(){
	StockMediatorCls *nyse = new StockMediatorCls();

	GormanSlacksCls *broker1 = new GormanSlacksCls(nyse);
	JTPoormanCls *broker2 = new JTPoormanCls(nyse);

	broker1->saleOffer("MSFT", 100);
	broker2->saleOffer("GOOG", 50);

	broker2->buyOffer("MSFT", 100);
	broker1->saleOffer("NRG", 10);

	broker1->buyOffer("NRG", 10);

	nyse->getStockOfferings();
}

