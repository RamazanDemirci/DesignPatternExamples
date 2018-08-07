/*
 * VibrationCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef VIBRATIONCLS_H_
#define VIBRATIONCLS_H_

#include "MobileAlertStateIfc.h"
#include "AlertStateContextCls.h"

class VibrationCls : public MobileAlertStateIfc {
public:
	VibrationCls();
	virtual ~VibrationCls();
	void alert(AlertStateContextCls *context);
};

#endif /* VIBRATIONCLS_H_ */
