/*
 * DummyProduct.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <DummyProductCls.h>

namespace Observer {

DummyProductCls::DummyProductCls() {
	// TODO Auto-generated constructor stub

}

DummyProductCls::~DummyProductCls() {
	// TODO Auto-generated destructor stub
}

void DummyProductCls::ChangePrice(float price)
{
    Notify(price);
}

} /* namespace Observer */
