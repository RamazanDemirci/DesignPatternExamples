/*
 * OnCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ONCLS_H_
#define ONCLS_H_

#include "MachineCls.h"
#include "StateCls.h"

class OnCls : public StateCls {
public:
	OnCls();
	virtual ~OnCls();
	void off(MachineCls * machine);
};

#endif /* ONCLS_H_ */
