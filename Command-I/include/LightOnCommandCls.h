/*
 * LightOnCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LIGHTONCOMMANDCLS_H_
#define LIGHTONCOMMANDCLS_H_

#include "CommandIfc.h"
#include "LightCls.h"

class LightOnCommandCls : public CommandIfc {
public:
	LightOnCommandCls();
	virtual ~LightOnCommandCls();
	LightOnCommandCls(LightCls *light);
	void execute();
	void undo();
private:
	LightCls *light;
	int prevLevel;
};

#endif /* LIGHTONCOMMANDCLS_H_ */
