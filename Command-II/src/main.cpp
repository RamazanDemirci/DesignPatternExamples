/*
 * main.cpp
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#include <iostream>
#include "ManagerCls.h"
#include "MechanicCls.h"
#include "ChangeOilCommandCls.h"
#include "CheckElectricalsCommandCls.h"

int main(){
	ManagerCls *manager = new ManagerCls();
	MechanicCls *mechanic = new MechanicCls();

	CommandIfc *oilChange = new ChangeOilCommandCls(mechanic);
	CommandIfc *electricalsCheck= new CheckElectricalsCommandCls(mechanic);

	manager->addRequest(CommandType::OIL, oilChange);
	manager->addRequest(CommandType::ELECTRICALS, electricalsCheck);

	manager->processRequest(CommandType::OIL);
	manager->processRequest(CommandType::ELECTRICALS);

	int a;
	std::cin >> a;
}

