/*
 * HourlyWorkerCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef HOURLYWORKERCLS_H_
#define HOURLYWORKERCLS_H_

#include <string>
#include "EmployeeIfc.h"

class HourlyWorkerCls : public EmployeeIfc {
public:
	HourlyWorkerCls();
	virtual ~HourlyWorkerCls();
	HourlyWorkerCls(std::string name, double w, double h);
	void setHourlyWage(double w);
	void setHours(double h);
	std::string getName();
	double earning();
	std::string toString();
private:
	double hourlyWage;
	double hours;
	std::string name;
};

#endif /* HOURLYWORKERCLS_H_ */
