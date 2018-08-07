/*
 * SilentCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SILENTCLS_H_
#define SILENTCLS_H_

#include "MobileAlertStateIfc.h"
#include "AlertStateContextCls.h"

class SilentCls : public MobileAlertStateIfc {
public:
	SilentCls();
	virtual ~SilentCls();
	void alert(AlertStateContextCls *context);
};

#endif /* SILENTCLS_H_ */
