/*
 * FruitCls.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include "FruitCls.h"

FruitCls::FruitCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

FruitCls::FruitCls(int pricePerKg, int weight, std::string name){
//	printf("\n%s", __FUNCTION__);
	this->pricePerKg = pricePerKg;
	this->weight = weight;
	this->name = name;
}

FruitCls::~FruitCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

int FruitCls::getPricePerKg(){
//	printf("\n%s", __FUNCTION__);
	return this->pricePerKg;
}

int FruitCls::getWeight(){
//	printf("\n%s", __FUNCTION__);
	return this->weight;
}

std::string FruitCls::getName(){
//	printf("\n%s", __FUNCTION__);
	return this->name;
}

int FruitCls::accept(ShoppingCartVisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	return visitor->visit(this);
}
