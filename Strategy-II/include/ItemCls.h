/*
 * ItemCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITEMCLS_H_
#define ITEMCLS_H_

#include <string>

class ItemCls {
public:
	ItemCls(std::string upc, float cost, std::string currency);
	virtual ~ItemCls();
	std::string getUpcCode();
	float getPrice();
	std::string getCurrency();
private:
	ItemCls();
	std::string upcCode;
	float price;
	std::string currency;
};

#endif /* ITEMCLS_H_ */
