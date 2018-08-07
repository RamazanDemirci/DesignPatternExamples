/*
 * ProxyCarCls.cpp
 *
 *  Created on: 5 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "ProxyCarCls.h"
#include "CarCls.h"

ProxyCarCls::ProxyCarCls() {
	// TODO Auto-generated constructor stub

}

ProxyCarCls::~ProxyCarCls() {
	// TODO Auto-generated destructor stub
}

ProxyCarCls::ProxyCarCls(DriverCls *driver){
	this->driver = driver;
	realCar = (CarIfc*)(new CarCls());
}

void ProxyCarCls::moveCar() {
	if (driver->getAge() <= 16) {
		printf("\nSorry the driver is too young to drive");
	} else {
		realCar->moveCar();
	}
}
