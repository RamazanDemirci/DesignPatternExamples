/*
 * ConcreteObserver.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHOP_H_
#define SHOP_H_
//#pragma once


#include <iostream>
#include <string>
#include "ObserverIfc.h"
#include "SubjectCls.h"

namespace Observer {

class ShopCls : public ObserverIfc{
public:
	ShopCls();
	virtual ~ShopCls();

	//Name of the Shop
	std::string name;
	float price;
public:
	ShopCls(std::string n);
	void Update(SubjectCls *subject);
};

} /* namespace Observer */

#endif /* SHOP_H_ */
