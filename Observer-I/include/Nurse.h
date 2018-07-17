/*
 * Doctor.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#pragma once

#include <string>

#include "ObserverIfc.h"

class Nurse : public ObserverIfc{
public:
	Nurse();

	~Nurse();
	Nurse(std::string);
private:
	std::string name;

public:
	const char* getName();
	void update(std::string notify);
};
