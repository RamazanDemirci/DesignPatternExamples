/*
 * EmployeeIfc.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef EMPLOYEEIFC_H_
#define EMPLOYEEIFC_H_

#include <string>

class EmployeeIfc {
public:
	virtual void showHappiness() = 0;
	virtual std::string getName() = 0;
};

#endif /* EMPLOYEEIFC_H_ */
