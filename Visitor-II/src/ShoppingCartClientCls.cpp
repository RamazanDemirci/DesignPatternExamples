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

int ShoppingCartClientCls::visit(BookCls *book) {
//	printf("\n%s", __FUNCTION__);
	int cost = 0;

	//apply 5$ discount if book price is greater than 50
	if (book->getPrice() > 50) {
		cost = book->getPrice() - 5;
	} else
		cost = book->getPrice();
	printf("\nBook ISBN::%s cost = %d", book->getIsbnNumber().c_str(), cost);

	return cost;
}

int ShoppingCartClientCls::visit(FruitCls *fruit){
//	printf("\n%s", __FUNCTION__);
	int cost = 0;

	cost = fruit->getPricePerKg() * fruit->getWeight();
	printf("\nFruit Name::%s cost = %d", fruit->getName().c_str(), cost);

	return cost;
}
