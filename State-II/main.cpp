/*
 * main.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */


/*
 * ref : https://www.geeksforgeeks.org/state-design-pattern/
 *
 * */

#include "SilentCls.h"
#include "VibrationCls.h"

int main(){
	AlertStateContextCls *stateContext = new AlertStateContextCls();
	stateContext->alert();
	stateContext->alert();
	stateContext->setState(new SilentCls());
	stateContext->alert();
	stateContext->alert();
	stateContext->setState(new VibrationCls());
	stateContext->alert();
}
