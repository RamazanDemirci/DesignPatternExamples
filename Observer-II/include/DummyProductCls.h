/*
 * DummyProduct.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef DUMMYPRODUCT_H_
#define DUMMYPRODUCT_H_
//#pragma once

#include <string>
#include "SubjectCls.h"

namespace Observer {

class DummyProductCls: public SubjectCls{
public:
	DummyProductCls(std::string name);
	virtual ~DummyProductCls();
    void ChangePrice(float price);
};

} /* namespace Observer */

#endif /* DUMMYPRODUCT_H_ */
