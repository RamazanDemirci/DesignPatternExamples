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
	printf("\n##########Stock is Launch!!!##########");
	GormanSlacksCls *broker1 = new GormanSlacksCls(nyse);
	JTPoormanCls *broker2 = new JTPoormanCls(nyse);

	broker1->setCollCode(9970);
	broker2->setCollCode(9980);

	printf("\n\n--------------Order Collect Session Start--------------");

	printf("\n\n--------------1st Order--------------");
	broker1->saleOffer("MSFT", 100);
	broker2->saleOffer("GOOG", 50);

	printf("\n\n--------------2nd Order--------------");
	broker2->buyOffer("MSFT", 100);
	broker2->saleOffer("NRG", 10);

	printf("\n\n--------------3rd Order--------------");
	broker1->buyOffer("NRG", 10);
	broker2->buyOffer("MSFT", 80);

	printf("\n\n--------------Order Collect Session End--------------");

	printf("\n\n##########Collected Orders##########");
	nyse->getStockOfferings();
}

