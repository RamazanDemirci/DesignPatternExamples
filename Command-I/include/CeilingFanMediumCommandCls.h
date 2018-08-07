/*
 * CeilingFanMediumCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CEILINGFANMEDIUMCOMMANDCLS_H_
#define CEILINGFANMEDIUMCOMMANDCLS_H_

#include "CommandIfc.h"
#include "CeilingFanCls.h"

class CeilingFanMediumCommandCls : public CommandIfc {
public:
	CeilingFanMediumCommandCls();
	virtual ~CeilingFanMediumCommandCls();
	CeilingFanMediumCommandCls(CeilingFanCls *ceilingFan);
	void execute();
	void undo();
private:
	CeilingFanCls *ceilingFan;
	int prevSpeed;
};

#endif /* CEILINGFANMEDIUMCOMMANDCLS_H_ */
