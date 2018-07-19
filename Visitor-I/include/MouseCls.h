/*
 * MouseCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MOUSECLS_H_
#define MOUSECLS_H_

#include "ComputerPartIfc.h"r"
#include "ComputerPartVisitorIfc.h"

class MouseCls : public ComputerPartIfc {
public:
	MouseCls();
	virtual ~MouseCls();
	void accept(ComputerPartVisitorIfc *visitor);
};

#endif /* MOUSECLS_H_ */
