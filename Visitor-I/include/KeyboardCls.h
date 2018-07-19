/*
 * KeyboardCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef KEYBOARDCLS_H_
#define KEYBOARDCLS_H_

#include "ComputerPartIfc.h"
#include "ComputerPartVisitorIfc.h"

class KeyboardCls : public ComputerPartIfc {
public:
	KeyboardCls();
	virtual ~KeyboardCls();
	void accept(ComputerPartVisitorIfc *visitor);
};

#endif /* KEYBOARDCLS_H_ */
