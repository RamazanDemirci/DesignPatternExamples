/*
 * DummyProduct.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef DUMMYPRODUCT_H_
#define DUMMYPRODUCT_H_
//#pragma once

#include "ASubject.h"

namespace Observer {

class DummyProduct: public ASubject{
public:
	DummyProduct();
	virtual ~DummyProduct();
public:
    void ChangePrice(float price);
};

} /* namespace Observer */

#endif /* DUMMYPRODUCT_H_ */
