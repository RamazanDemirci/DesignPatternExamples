/*
 * DimmerLightOffCommandCls.h
 *
 *  Created on: 25 Tem 2018
 *      Author: tr1d5042
 */

#ifndef DIMMERLIGHTOFFCOMMANDCLS_H_
#define DIMMERLIGHTOFFCOMMANDCLS_H_

#include "CommandIfc.h"
#include "LightCls.h"

class DimmerLightOffCommandCls : public CommandIfc {
public:
	DimmerLightOffCommandCls();
	virtual ~DimmerLightOffCommandCls();
	DimmerLightOffCommandCls(LightCls *light);
	void execute();
	void undo();
private:
	LightCls *light;
	int prevLevel;
};

#endif /* DIMMERLIGHTOFFCOMMANDCLS_H_ */
