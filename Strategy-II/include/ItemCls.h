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
	ItemCls();
	ItemCls(std::string upc, int cost);
	virtual ~ItemCls();
private:
	std::string upcCode;
	int price;
public:
	std::string getUpcCode();
	int getPrice();
};

#endif /* ITEMCLS_H_ */
