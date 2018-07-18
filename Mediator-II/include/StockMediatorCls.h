/*
 * StockMediatorCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STOCKMEDIATORCLS_H_
#define STOCKMEDIATORCLS_H_

#include <string>
#include <vector>
#include "MediatorIfc.h"
#include "ColleagueCls.h"
#include "StockOfferCls.h"

class StockMediatorCls : public MediatorIfc {
public:
	StockMediatorCls();
	virtual ~StockMediatorCls();

	void saleOffer(std::string stock, int shares, int colleagueCode);
	void buyOffer(std::string stock, int shares, int colleagueCode);
	void addColleague(ColleagueCls *colleague);
	void getStockOfferings();
private:
	std::vector<ColleagueCls*> colleagueList;
	std::vector<StockOfferCls*> stockBuyList;
	std::vector<StockOfferCls*> stockSellList;
	int colleagueCodes;
};

#endif /* STOCKMEDIATORCLS_H_ */
