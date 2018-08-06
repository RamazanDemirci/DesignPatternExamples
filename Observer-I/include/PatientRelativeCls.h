/*
 * PatientRelative.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PatientRelative_H_
#define PatientRelative_H_

#include <ObservableCls.h>
#include <string>
#include <vector>


class PatientRelativeCls : public ObservableCls{
public:
	PatientRelativeCls();
	virtual ~PatientRelativeCls();
	PatientRelativeCls(std::string name);
	/*virtual*/void Notify(std::string notify);
	const char* getName();
	void setName(std::string name);
	const char* getState();
	void setState(std::string state);
private:
	std::string name;
	std::string state;
};

#endif /* PatientRelative_H_ */
