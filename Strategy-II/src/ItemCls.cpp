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

ItemCls::ItemCls(std::string upc, int cost){
	this->upcCode = upcCode;
	this->price = cost;
}

ItemCls::~ItemCls() {
	// TODO Auto-generated destructor stub
}

std::string ItemCls::getUpcCode(){
	return this->upcCode;
}

int ItemCls::getPrice(){
	return this->price;
}
