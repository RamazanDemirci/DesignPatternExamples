/*
 * KittenCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef KITTENCLS_H_
#define KITTENCLS_H_

#include "AnimalCls.h"

class KittenCls : public AnimalCls {
public:
	KittenCls();
	virtual ~KittenCls();
	/*virtual*/void eat();
};

#endif /* KITTENCLS_H_ */
