/*
 * MonkeyCls.h
 *
 *  Created on: 3 A�u 2018
 *      Author: tr1d5042
 */

#ifndef MONKEYCLS_H_
#define MONKEYCLS_H_

#include "AnimalCls.h"

class MonkeyCls : public AnimalCls {
public:
	MonkeyCls();
	virtual ~MonkeyCls();
	/*virtual*/ void eat();
};

#endif /* MONKEYCLS_H_ */
