/*
 * ManagerCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef MANAGERCLS_H_
#define MANAGERCLS_H_

#include <string>
#include "EmployeeIfc.h"

class ManagerCls : public EmployeeIfc {
public:
	ManagerCls();
	virtual ~ManagerCls();
	ManagerCls(std::string name, double s);
	void setWeeklySalary(double s);
	double earnings();
	std::string getName();
	std::string toString();
private:
	std::string name;
	double weeklySalary;
};

#endif /* MANAGERCLS_H_ */
