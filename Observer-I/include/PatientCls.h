/*
 * Patient.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PATIENT_H_
#define PATIENT_H_

#include <ObservableCls.h>
#include <string>
#include <vector>


class PatientCls : public ObservableCls{
public:
	PatientCls();
	virtual ~PatientCls();
	PatientCls(std::string name);
	/*virtual*/void Notify(std::string notify);
	const char* getName();
	void setName(std::string name);
	const char* getState();
	void setState(std::string state);
private:
	std::string name;
	std::string state;
};

#endif /* PATIENT_H_ */
