/*
 * ChangeOilCommandCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CHANGEOILCOMMANDCLS_H_
#define CHANGEOILCOMMANDCLS_H_

#include "CommandIfc.h"
#include "MechanicCls.h"

class ChangeOilCommandCls : public CommandIfc {
public:
	ChangeOilCommandCls();
	virtual ~ChangeOilCommandCls();
	ChangeOilCommandCls(MechanicCls *mechanic);
	void execute();
private:
	MechanicCls *mechanic;
};

#endif /* CHANGEOILCOMMANDCLS_H_ */
