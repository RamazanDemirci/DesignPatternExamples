/*
 * PatientRelative.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PatientRelative_H_
#define PatientRelative_H_

#include <string>
#include <vector>

#include "Observable.h"

class PatientRelative : public Observable{
public:
	PatientRelative();
	virtual ~PatientRelative();
	PatientRelative(std::string name);
private:
	std::string name;
	std::string state;

public:
	const char* getName();
	void setName(std::string name);
	const char* getState();
	void setState(std::string state);
	void Notify(std::string notify);
};

#endif /* PatientRelative_H_ */
