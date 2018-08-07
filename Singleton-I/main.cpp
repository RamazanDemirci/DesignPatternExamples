/*
 * main.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "RobotCls.h"

/*
 * https://www.codeproject.com/Articles/186218/Singleton-Design-Pattern
 * */

int main(){
	RobotCls* a = RobotCls::Instance();
	a->setName("Jim");

	RobotCls* b = RobotCls::Instance();
	printf("\nRobot's name is : %s", b->getName().c_str());

	RobotCls* c = RobotCls::Instance();
	printf("\nRobot's name is : %s", c->getName().c_str());

}

