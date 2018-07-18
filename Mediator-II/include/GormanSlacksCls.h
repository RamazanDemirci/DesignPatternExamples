/*
 * GormanSlacksCls.h
 *
 *  Created on: 17 Tem 2018
 *      Author: tr1d5042
 */

#ifndef GORMANSLACKSCLS_H_
#define GORMANSLACKSCLS_H_

#include "ColleagueCls.h"
#include "MediatorIfc.h"

class GormanSlacksCls : public ColleagueCls {
public:
	GormanSlacksCls();
	GormanSlacksCls(MediatorIfc *mediator);
	virtual ~GormanSlacksCls();
};

#endif /* GORMANSLACKSCLS_H_ */
