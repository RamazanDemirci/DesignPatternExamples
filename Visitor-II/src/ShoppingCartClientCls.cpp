/*
 * ShoppingCartClientCls.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include "ShoppingCartClientCls.h"

ShoppingCartClientCls::ShoppingCartClientCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

ShoppingCartClientCls::~ShoppingCartClientCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

float ShoppingCartClientCls::visit(BookCls *book) {
//	printf("\n%s", __FUNCTION__);
	float cost = 0;

	//apply 5$ discount if book price is greater than 50
	if (book->getPrice() > 50) {
		cost = book->getPrice() - 5;
	} else
		cost = book->getPrice();
	printf("\n%-10s %-20s %-20s %-.2f"
			, "Book"
			, book->getIsbnNumber().c_str()
			, book->getDescription().c_str()
			, cost);

	return cost;
}

float ShoppingCartClientCls::visit(FruitCls *fruit){
//	printf("\n%s", __FUNCTION__);
	float cost = 0;

	cost = fruit->getPricePerKg() * fruit->getWeight();
	printf("\n%-10s %-20s %-20s %-.2f"
			, "Fruit"
			, fruit->getName().c_str()
			, fruit->getDescription().c_str()
			, cost);

	return cost;
}
