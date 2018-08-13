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
	FruitCls(float pricePerKg, float weight, std::string name, std::string description);
	float getPricePerKg();
	float getWeight();
	std::string getName();
	std::string getDescription();
	float accept(ShoppingCartVisitorIfc *visitor);
private:
	float pricePerKg;
	float weight;
	std::string name;
	std::string description;
};

#endif /* FRUITCLS_H_ */
