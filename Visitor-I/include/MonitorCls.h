/*
 * MonitorCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MONITORCLS_H_
#define MONITORCLS_H_

#include "ComputerPartIfc.h"
#include "ComputerPartVisitorIfc.h"

class MonitorCls : public ComputerPartIfc{
public:
	MonitorCls();
	virtual ~MonitorCls();
	void accept(ComputerPartVisitorIfc *visitor);
};

#endif /* MONITORCLS_H_ */
