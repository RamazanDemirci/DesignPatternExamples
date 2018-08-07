/*
 * MobileAlertStateIfc.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MOBILEALERTSTATEIFC_H_
#define MOBILEALERTSTATEIFC_H_

class AlertStateContextCls;

class MobileAlertStateIfc{
public:
	virtual void alert(AlertStateContextCls *context) = 0;
};


#endif /* MOBILEALERTSTATEIFC_H_ */
