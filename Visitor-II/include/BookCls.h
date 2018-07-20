/*
 * BookCls.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef BOOKCLS_H_
#define BOOKCLS_H_

#include <string>
#include "ItemElementIfc.h"

#include "ShoppingCartVisitorIfc.h"

class BookCls : public ItemElementIfc {
public:
	BookCls();
	BookCls(int cost, std::string isbn);
	virtual ~BookCls();
	int getPrice();
	std::string getIsbnNumber();
	int accept(ShoppingCartVisitorIfc *visitor);
private:
	int price;
	std::string isbnNumber;
};

#endif /* BOOKCLS_H_ */
