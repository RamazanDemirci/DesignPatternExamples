/*
 * ItemCls.cpp
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#include "ItemCls.h"

ItemCls::ItemCls() {
	// TODO Auto-generated constructor stub

}

ItemCls::ItemCls(std::string upc, float cost, std::string currency){
	this->upcCode = upcCode;
	this->price = cost;
	this->currency = currency;
}

ItemCls::~ItemCls() {
	// TODO Auto-generated destructor stub
}

std::string ItemCls::getUpcCode(){
	return this->upcCode;
}

float ItemCls::getPrice(){
	return this->price;
}

std::string ItemCls::getCurrency(){
	return this->currency;
}
