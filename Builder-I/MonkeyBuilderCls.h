/*
 * MoneyBuilderCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef MONKEYBUILDERCLS_H_
#define MONKEYBUILDERCLS_H_

#include "AnimalBuilderCls.h"

class MonkeyBuilderCls: public AnimalBuilderCls {
public:
	MonkeyBuilderCls();
	virtual ~MonkeyBuilderCls();
	/*virtual*/ void buildAnimalHeader();
	/*virtual*/ void buildAnimalBody();
	/*virtual*/ void buildAnimalLeg();
	/*virtual*/ void buildAnimalArm();
	/*virtual*/ void buildAnimalTail();
};

#endif /* MONKEYBUILDERCLS_H_ */
