/*
 * AlertStateContextCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ALERTSTATECONTEXTCLS_H_
#define ALERTSTATECONTEXTCLS_H_

#include "MobileAlertStateIfc.h"

class AlertStateContextCls {
public:
	AlertStateContextCls();
	virtual ~AlertStateContextCls();
	void setState(MobileAlertStateIfc *state);
	void alert();
private:
	MobileAlertStateIfc *currentState;
};

#endif /* ALERTSTATECONTEXTCLS_H_ */
