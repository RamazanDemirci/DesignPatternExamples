/*
 * DummyProduct.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "DummyProductCls.h"

namespace Observer {

DummyProductCls::DummyProductCls(std::string name) {
	// TODO Auto-generated constructor stub
	SubjectCls::name = name;
}

DummyProductCls::~DummyProductCls() {
	// TODO Auto-generated destructor stub
}

void DummyProductCls::ChangePrice(float price){
	SubjectCls::price = price;
    SubjectCls::Notify();
}

} /* namespace Observer */
