/*
 * main.cpp
 *
 *  Created on: 5 Aðu 2018
 *      Author: tr1d5042
 */

/*
 * https://www.codeproject.com/Articles/186001/Proxy-Design-Pattern
 * */

#include "ProxyCarCls.h"
#include "DriverCls.h"
#include "CarCls.h"

int main(){
	CarIfc *car = new ProxyCarCls(new DriverCls(16));
	car->moveCar();

	car = new ProxyCarCls(new DriverCls(25));
	car->moveCar();
}

