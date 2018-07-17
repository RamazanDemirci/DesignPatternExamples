/*
 * DummyProduct.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "DummyProduct.h"

namespace Observer {

DummyProduct::DummyProduct() {
	// TODO Auto-generated constructor stub

}

DummyProduct::~DummyProduct() {
	// TODO Auto-generated destructor stub
}

void DummyProduct::ChangePrice(float price)
{
    Notify(price);
}

} /* namespace Observer */
