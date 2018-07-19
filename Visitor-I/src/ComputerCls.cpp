/*
 * ComputerCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "ComputerCls.h"
#include "MouseCls.h"
#include "KeyboardCls.h"
#include "MonitorCls.h"

ComputerCls::ComputerCls() {
	// TODO Auto-generated constructor stub
	partList.push_back(new MouseCls());
	partList.push_back(new KeyboardCls());
	partList.push_back(new MonitorCls());
}

ComputerCls::~ComputerCls() {
	// TODO Auto-generated destructor stub
}

void ComputerCls::accept(ComputerPartVisitorIfc *visitor){
	std::for_each(partList.begin(), partList.end(), [=](ComputerPartIfc *item){
		item->accept(visitor);
	});
}
