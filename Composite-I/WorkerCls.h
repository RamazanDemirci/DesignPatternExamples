/*
 * WorkerCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef WORKERCLS_H_
#define WORKERCLS_H_

#include <string>
#include "EmployeeIfc.h"

class WorkerCls : public EmployeeIfc {
public:
	WorkerCls();
	virtual ~WorkerCls();
	WorkerCls(std::string name, int happiness);
	/*virtual*/ void showHappiness();
	/*virtual*/ std::string getName();
private:
	std::string name;
	int happiness;
};

#endif /* WORKERCLS_H_ */
