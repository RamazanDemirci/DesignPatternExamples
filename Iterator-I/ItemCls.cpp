/*
 * ItemCls.cpp
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#include "ItemCls.h"

ItemCls::ItemCls() {
	// TODO Auto-generated constructor stub
	printf("\n%s", __FUNCTION__);
}

ItemCls::~ItemCls() {
	// TODO Auto-generated destructor stub
	printf("\n%s", __FUNCTION__);
}

ItemCls::ItemCls(std::string name){
	printf("\n%s", __FUNCTION__);
	this->name = name;
}

std::string ItemCls::getName(){
	printf("\n%s", __FUNCTION__);
	return this->name;
}
