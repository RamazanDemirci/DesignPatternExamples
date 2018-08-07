/*
 * LightOffCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LIGHTOFFCOMMANDCLS_H_
#define LIGHTOFFCOMMANDCLS_H_

#include "CommandIfc.h"
#include "LightCls.h"

class LightOffCommandCls : public CommandIfc {
public:
	LightOffCommandCls();
	virtual ~LightOffCommandCls();
	LightOffCommandCls(LightCls *light);
	void execute();
	void undo();
private:
	LightCls *light;
	int prevLevel;
};

#endif /* LIGHTOFFCOMMANDCLS_H_ */
