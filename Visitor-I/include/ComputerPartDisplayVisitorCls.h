/*
 * ComputerPartDisplayVisitorCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMPUTERPARTDISPLAYVISITORCLS_H_
#define COMPUTERPARTDISPLAYVISITORCLS_H_

#include "ComputerPartVisitorIfc.h"
#include "ComputerCls.h"
#include "MouseCls.h"
#include "KeyboardCls.h"
#include "MonitorCls.h"

class ComputerPartDisplayVisitorCls : public ComputerPartVisitorIfc {
public:
	ComputerPartDisplayVisitorCls();
	virtual ~ComputerPartDisplayVisitorCls();
	void visit(ComputerCls *computer);
	void visit(MouseCls *mouse);
	void visit(KeyboardCls *keyboard);
	void visit(MonitorCls *monitor);
};

#endif /* COMPUTERPARTDISPLAYVISITORCLS_H_ */
