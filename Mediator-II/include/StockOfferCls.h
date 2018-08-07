/*
 * StockOfferCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STOCKOFFERCLS_H_
#define STOCKOFFERCLS_H_

#include <string>

class StockOfferCls {
public:
	StockOfferCls();
	virtual ~StockOfferCls();
	StockOfferCls(int numOfShares, std::string stockSymbol, int colleaguCode);
	int getNumOfShares();
	std::string getStockSymbol();
	int getColleagueCode();
private:
	int numOfShares;
	std::string stockSymbol;
	int colleaguCode;
};

#endif /* STOCKOFFERCLS_H_ */
