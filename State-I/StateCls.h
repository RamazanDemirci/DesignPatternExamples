/*
 * StateCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef STATECLS_H_
#define STATECLS_H_

class MachineCls;

class StateCls {
public:
	StateCls();
	virtual ~StateCls();
	virtual void on(MachineCls *machine);
	virtual void off(MachineCls *machine);
};

#endif /* STATECLS_H_ */
