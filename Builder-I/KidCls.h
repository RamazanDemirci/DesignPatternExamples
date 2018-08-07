/*
 * KidCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef KIDCLS_H_
#define KIDCLS_H_

#include <string>
#include "AnimalBuilderCls.h"

class KidCls {
public:
	KidCls();
	virtual ~KidCls();
	void makeAnimal(AnimalBuilderCls *animalBuilder);
	std::string getName();
	void setName(std::string name);
private:
	std::string name;
};

#endif /* KIDCLS_H_ */
