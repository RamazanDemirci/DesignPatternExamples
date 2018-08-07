/*
 * CeilingFanHighCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CEILINGFANHIGHCOMMANDCLS_H_
#define CEILINGFANHIGHCOMMANDCLS_H_

#include "CommandIfc.h"
#include "CeilingFanCls.h"

class CeilingFanHighCommandCls : public CommandIfc {
public:
	CeilingFanHighCommandCls();
	virtual ~CeilingFanHighCommandCls();
	CeilingFanHighCommandCls(CeilingFanCls *light);
	void execute();
	void undo();
private:
	CeilingFanCls *ceilingFan;
	int prevSpeed;
};

#endif /* CEILINGFANHIGHCOMMANDCLS_H_ */
