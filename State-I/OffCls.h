/*
 * OffCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OFFCLS_H_
#define OFFCLS_H_

#include "MachineCls.h"
#include "StateCls.h"

class OffCls : public StateCls {
public:
	OffCls();
	virtual ~OffCls();
	void On(MachineCls *machine);
};

#endif /* OFFCLS_H_ */
