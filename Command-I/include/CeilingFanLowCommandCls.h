/*
 * CeilingFanLowCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CEILINGFANLOWCOMMANDCLS_H_
#define CEILINGFANLOWCOMMANDCLS_H_

#include "CommandIfc.h"
#include "CeilingFanCls.h"

class CeilingFanLowCommandCls : public CommandIfc {
public:
	CeilingFanLowCommandCls();
	virtual ~CeilingFanLowCommandCls();
	CeilingFanLowCommandCls(CeilingFanCls *ceilingFan);
	void execute();
	void undo();
private:
	CeilingFanCls *ceilingFan;
	int prevSpeed;
};

#endif /* CEILINGFANLOWCOMMANDCLS_H_ */
