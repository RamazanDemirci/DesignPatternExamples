/*
 * ComputerPartVisitorIfc.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMPUTERPARTVISITORIFC_H_
#define COMPUTERPARTVISITORIFC_H_

class ComputerCls;
class MouseCls;
class KeyboardCls;
class MonitorCls;

class ComputerPartVisitorIfc{
public:
	virtual void visit(ComputerCls *computer) = 0;
	virtual void visit(MouseCls *mouse) = 0;
	virtual void visit(KeyboardCls *keyboard) = 0;
	virtual void visit(MonitorCls *monitor) = 0;
};



#endif /* COMPUTERPARTVISITORIFC_H_ */
