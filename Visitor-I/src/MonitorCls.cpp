/*
 * MonitorCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "MonitorCls.h"

MonitorCls::MonitorCls() {
	// TODO Auto-generated constructor stub

}

MonitorCls::~MonitorCls() {
	// TODO Auto-generated destructor stub
}

void MonitorCls::accept(ComputerPartVisitorIfc *visitor){
	visitor->visit(this);
}

