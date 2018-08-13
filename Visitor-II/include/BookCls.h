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
	BookCls(float cost, std::string isbn, std::string description);
	virtual ~BookCls();
	float getPrice();
	std::string getIsbnNumber();
	std::string getDescription();
	float accept(ShoppingCartVisitorIfc *visitor);
private:
	float price;
	std::string isbnNumber;
	std::string description;
};

#endif /* BOOKCLS_H_ */
