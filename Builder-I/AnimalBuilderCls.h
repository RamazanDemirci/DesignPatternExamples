/*
 * AnimalBuilderCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef ANIMALBUILDERCLS_H_
#define ANIMALBUILDERCLS_H_

#include "AnimalCls.h"

class AnimalBuilderCls {
public:
	virtual void buildAnimalHeader() = 0;
	virtual void buildAnimalBody() = 0;
	virtual void buildAnimalLeg() = 0;
	virtual void buildAnimalArm() = 0;
	virtual void buildAnimalTail() = 0;
	AnimalCls *animal;
};

#endif /* ANIMALBUILDERCLS_H_ */
