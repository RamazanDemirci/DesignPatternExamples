/*
 * FactoryCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "FactoryCls.h"
#include "ChocolateIceCreamCls.h"
#include "VanillaIceCreamCls.h"
#include "StrawberryIceCreamCls.h"

FactoryCls::FactoryCls() {
	// TODO Auto-generated constructor stub

}

FactoryCls::~FactoryCls() {
	// TODO Auto-generated destructor stub
}

IceCreamIfc* FactoryCls::Get(int id) {
	switch (id) {
	case 0:
		return new ChocolateIceCreamCls();
	case 1:
		return new VanillaIceCreamCls();
	case 2:
		return new StrawberryIceCreamCls();
	default:
		return NULL;
	}
}

