/*
 * EngineCls.h
 *
 *  Created on: 23 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ENGINECLS_H_
#define ENGINECLS_H_

#include "VisitableIfc.h"

class EngineCls : public VisitableIfc {
public:
	EngineCls();
	virtual ~EngineCls();
	void accept(VisitorIfc *visitor);
};

#endif /* ENGINECLS_H_ */
