/*
 * KittenBuilderCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef KITTENBUILDERCLS_H_
#define KITTENBUILDERCLS_H_

#include "AnimalBuilderCls.h"

class KittenBuilderCls : public AnimalBuilderCls{
public:
	KittenBuilderCls();
	virtual ~KittenBuilderCls();
	/*virtual*/ void buildAnimalHeader();
	/*virtual*/ void buildAnimalBody();
	/*virtual*/ void buildAnimalLeg();
	/*virtual*/ void buildAnimalArm();
	/*virtual*/ void buildAnimalTail();
};

#endif /* KITTENBUILDERCLS_H_ */
