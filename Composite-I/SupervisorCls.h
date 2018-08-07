/*
 * SupervisorCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef SUPERVISORCLS_H_
#define SUPERVISORCLS_H_

#include <vector>
#include "EmployeeIfc.h"

class SupervisorCls : public EmployeeIfc {
public:
	SupervisorCls();
	virtual ~SupervisorCls();
	SupervisorCls(std::string name, int happiness);
	/*virtual*/void showHappiness();
	/*vrtual*/std::string getName();
	void addSubordinate(EmployeeIfc* subordinate);
private:
	std::string name;
	int happiness;
	std::vector<EmployeeIfc*> subOrdinateList;
};

#endif /* SUPERVISORCLS_H_ */
