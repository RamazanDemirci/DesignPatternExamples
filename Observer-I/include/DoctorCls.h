/*
 * Doctor.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef DOCTOR_H_
#define DOCTOR_H_

#include <string>

//#include "Observable.h"
#include "ObserverIfc.h"

class DoctorCls : public ObserverIfc{
public:
	DoctorCls();
	~DoctorCls();
	DoctorCls(std::string);

private:
	std::string name;

public:
	const char* getName();
	void update(std::string notify);
};

#endif /* DOCTOR_H_ */
