/*
 * KeyboardCls.cpp
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#include "KeyboardCls.h"

KeyboardCls::KeyboardCls() {
	// TODO Auto-generated constructor stub

}

KeyboardCls::~KeyboardCls() {
	// TODO Auto-generated destructor stub
}

void KeyboardCls::accept(ComputerPartVisitorIfc *visitor){
	visitor->visit(this);
}

