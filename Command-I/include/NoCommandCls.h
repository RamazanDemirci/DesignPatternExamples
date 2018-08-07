/*
 * NoCommandCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef NOCOMMANDCLS_H_
#define NOCOMMANDCLS_H_

#include "CommandIfc.h"

class NoCommandCls : public CommandIfc {
public:
	NoCommandCls();
	virtual ~NoCommandCls();
	void execute();
	void undo();
};

#endif /* NOCOMMANDCLS_H_ */
