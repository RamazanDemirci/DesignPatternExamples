/*
 * CeilingFanOffCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CEILINGFANOFFCOMMANDCLS_H_
#define CEILINGFANOFFCOMMANDCLS_H_

#include "CommandIfc.h"
#include "CeilingFanCls.h"

class CeilingFanOffCommandCls : public CommandIfc {
public:
	CeilingFanOffCommandCls();
	virtual ~CeilingFanOffCommandCls();
	CeilingFanOffCommandCls(CeilingFanCls *ceilingFan);
	void execute();
	void undo();
private:
	CeilingFanCls *ceilingFan;
	int prevSpeed;
};

#endif /* CEILINGFANOFFCOMMANDCLS_H_ */
