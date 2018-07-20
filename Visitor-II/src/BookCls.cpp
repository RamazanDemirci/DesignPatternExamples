/*
 * BookCls.cpp
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#include "BookCls.h"

BookCls::BookCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

BookCls::BookCls(int cost, std::string isbn){
//	printf("\n%s", __FUNCTION__);
	this->price = cost;
	this->isbnNumber = isbn;
}


BookCls::~BookCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

int BookCls::getPrice() {
//	printf("\n%s", __FUNCTION__);
	return this->price;
}

std::string BookCls::getIsbnNumber(){
//	printf("\n%s", __FUNCTION__);
	return this->isbnNumber;
}

int BookCls::accept(ShoppingCartVisitorIfc *visitor){
//	printf("\n%s", __FUNCTION__);
	return visitor->visit(this);
}

