/*
 * Observable.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef OBSERVABLE_IFC_H_
#define OBSERVABLE_IFC_H_

#include <vector>
#include <string>
#include "Doctor.h"

class Observable
{
public:
	Observable();
	virtual ~Observable();

	std::vector<ObserverIfc*> list;

public:
	virtual void Notify(std::string notify) = 0;
	void addObserver(ObserverIfc *observer);
	void removeObserver(ObserverIfc *observer);
};

#endif /* OBSERVABLE_IFC_H_ */
