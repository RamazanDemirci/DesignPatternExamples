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

FruitCls::FruitCls(float pricePerKg, float weight, std::string name, std::string description){
//	printf("\n%s", __FUNCTION__);
	this->pricePerKg = pricePerKg;
	this->weight = weight;
	this->name = name;
	this->description = description;
}

FruitCls::~FruitCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

float FruitCls::getPricePerKg(){
//	printf("\n%s", __FUNCTION__);
	return this->pricePerKg;
}

float FruitCls::getWeight(){
//	printf("\n%s", __FUNCTION__);
	return this->weight;
}

std::string FruitCls::getName(){
//	printf("\n%s", __FUNCTION__);
	return this->name;
}

std::string FruitCls::getDescription(){
//	printf("\n%s", __FUNCTION__);
	return this->description;
}

float FruitCls::accept(ShoppingCartVisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	return visitor->visit(this);
}
