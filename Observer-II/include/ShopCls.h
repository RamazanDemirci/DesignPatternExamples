/*
 * ConcreteObserver.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SHOP_H_
#define SHOP_H_
//#pragma once

#include <ObserverIfc.h>
#include <iostream>
#include <string>

namespace Observer {

class ShopCls : ObserverIfc{
public:
	ShopCls();
	virtual ~ShopCls();

	//Name of the Shop
	std::string name;
	float price;
public:
	ShopCls(std::string n);
	void Update(float price);
};

} /* namespace Observer */

#endif /* SHOP_H_ */
