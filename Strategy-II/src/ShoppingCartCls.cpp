/*
 * ShoppingCartCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "ShoppingCartCls.h"

ShoppingCartCls::ShoppingCartCls() {
	// TODO Auto-generated constructor stub
}

ShoppingCartCls::~ShoppingCartCls() {
	// TODO Auto-generated destructor stub
}

void ShoppingCartCls::addItem(ItemCls *item){
	this->itemList.push_back(item);
}

void ShoppingCartCls::removeItem(ItemCls *item){
	this->itemList.erase(std::remove(this->itemList.begin(), this->itemList.end(), item), this->itemList.end());
}

int ShoppingCartCls::calculateTotal(){
	int sum = 0;
	for(ItemCls *item : itemList){
		sum += item->getPrice();
	}
	return sum;
}

void ShoppingCartCls::pay(PaymentStrategyIfc *paymentMethod){
	int amount = calculateTotal();
	paymentMethod->pay(amount);
}

