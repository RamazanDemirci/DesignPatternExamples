/*
 * ProductCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include "ProductCls.h"

ProductCls::ProductCls() {
	// TODO Auto-generated constructor stub

}

ProductCls::~ProductCls() {
	// TODO Auto-generated destructor stub
}

int ProductCls::getProductId(){
	return this->productId;
}

void ProductCls::setProductId(int productId){
	this->productId = productId;
}

std::string ProductCls::getName(){
	return this->name;
}

void ProductCls::setName(std::string name){
	this->name = name;
}

double ProductCls::getListPrice(){
	return this->listPrice;
}

void ProductCls::setListPrice(double listPrice){
	this->listPrice = listPrice;
}

std::string ProductCls::toString(){
	char str[100];
	sprintf(str, "%d -- %s -- %.2f"
			, this->productId
			, this->name
			, this->listPrice);
	return std::string(str);
}
