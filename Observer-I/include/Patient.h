/*
 * Patient.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PATIENT_H_
#define PATIENT_H_

#include <string>
#include <vector>

#include "Observable.h"

class Patient : public Observable{
public:
	Patient();
	virtual ~Patient();
	Patient(std::string name);
private:
	std::string name;
	std::string state;

public:
	void Notify(std::string notify);

public:
	const char* getName();
	void setName(std::string name);
	const char* getState();
	void setState(std::string state);
};

#endif /* PATIENT_H_ */
