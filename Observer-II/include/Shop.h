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
#include "IObserver.h"

namespace Observer {

class Shop : IObserver{
public:
	Shop();
	virtual ~Shop();

	//Name of the Shop
	std::string name;
	float price;
public:
	Shop(std::string n);
	void Update(float price);
};

} /* namespace Observer */

#endif /* SHOP_H_ */
