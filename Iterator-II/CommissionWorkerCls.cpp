/*
 * CommissionWorkerCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "CommissionWorkerCls.h"

CommissionWorkerCls::CommissionWorkerCls() {
	// TODO Auto-generated constructor stub

}

CommissionWorkerCls::~CommissionWorkerCls() {
	// TODO Auto-generated destructor stub
}

CommissionWorkerCls::CommissionWorkerCls(std::string name,
		double salary, double commission, double totalSales) {
	this->name = name;
	setSalary(salary);
	setCommission(commission);
	setTotalSales(totalSales);
}

void CommissionWorkerCls::setSalary(double s) {
	if( s > 0)
		salary = s;
	else
		salary = 0;
}

void CommissionWorkerCls::setCommission(double c) {
	if ( c > 0)
		commission = c;
	else
		commission = 0;
}

void CommissionWorkerCls::setTotalSales(double ts) {
	if (ts > 0 )
		totalSales = ts;
	else
		totalSales = 0;
}

std::string CommissionWorkerCls::getName() {
	return this->name;
}

double CommissionWorkerCls::earnings() {
	return salary + commission/100*totalSales;
}

std::string CommissionWorkerCls::toString() {
	return "Commission worker:"
			+ getName();
}
