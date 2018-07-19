/*
 * MouseCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "MouseCls.h"

MouseCls::MouseCls() {
	// TODO Auto-generated constructor stub

}

MouseCls::~MouseCls() {
	// TODO Auto-generated destructor stub
}

	void MouseCls::accept(ComputerPartVisitorIfc *visitor){
	visitor->visit(this);
}
