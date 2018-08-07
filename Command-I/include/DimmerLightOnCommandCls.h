/*
 * DimmerLightOnCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef DIMMERLIGHTONCOMMANDCLS_H_
#define DIMMERLIGHTONCOMMANDCLS_H_

#include "CommandIfc.h"
#include "LightCls.h"

class DimmerLightOnCommandCls : public CommandIfc {
public:
	DimmerLightOnCommandCls();
	virtual ~DimmerLightOnCommandCls();
	DimmerLightOnCommandCls(LightCls *light);
	void execute();
	void undo();
private:
	LightCls *light;
	int prevLevel;
};

#endif /* DimmerLightOnCommandCls_H_ */
