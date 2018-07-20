/*
 * FruitCls.h
 *
 *  Created on: 20 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FRUITCLS_H_
#define FRUITCLS_H_

#include <vector>
#include "ItemElementIfc.h"
#include "ShoppingCartVisitorIfc.h"

class FruitCls : public ItemElementIfc {
public:
	FruitCls();
	virtual ~FruitCls();
	FruitCls(int pricePerKg, int weight, std::string name);
	int getPricePerKg();
	int getWeight();
	std::string getName();
	int accept(ShoppingCartVisitorIfc *visitor);
private:
	int pricePerKg;
	int weight;
	std::string name;
};

#endif /* FRUITCLS_H_ */
