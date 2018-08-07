/*
 * ComissionWorkerCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMMISSIONWORKERCLS_H_
#define COMMISSIONWORKERCLS_H_

#include <string>
#include "EmployeeIfc.h"

class CommissionWorkerCls : public EmployeeIfc {
public:
	CommissionWorkerCls();
	virtual ~CommissionWorkerCls();
	CommissionWorkerCls(std::string name,
			double salary, double commission, double totalSales);
	void setSalary(double s);
	void setCommission(double c);
	void setTotalSales(double ts);
	std::string getName();
	double earnings();
	std::string toString();
private:
	double salary;
	double commission;
	double totalSales;
	std::string name;
};

#endif /* COMMISSIONWORKERCLS_H_ */
