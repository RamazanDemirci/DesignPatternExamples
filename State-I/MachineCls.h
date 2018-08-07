/*
 * MachineCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MACHINECLS_H_
#define MACHINECLS_H_

#include "StateCls.h"

class MachineCls {
public:
	MachineCls();
	virtual ~MachineCls();
	void setCurrent(StateCls *state);
	void on();
	void off();
private:
	StateCls *current;
};

#endif /* MACHINECLS_H_ */
