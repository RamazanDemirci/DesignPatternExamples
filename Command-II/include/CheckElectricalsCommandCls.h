/*
 * ChangeElectricalsCommandCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CHECKELECTRICALSCOMMANDCLS_H_
#define CHECKELECTRICALSCOMMANDCLS_H_

#include "CommandIfc.h"
#include "MechanicCls.h"

class CheckElectricalsCommandCls : public CommandIfc {
public:
	CheckElectricalsCommandCls();
	virtual ~CheckElectricalsCommandCls();
	CheckElectricalsCommandCls(MechanicCls *mechanic);
	void execute();
private:
	MechanicCls *mechanic;
};

#endif /* CHECKELECTRICALSCOMMANDCLS_H_ */
