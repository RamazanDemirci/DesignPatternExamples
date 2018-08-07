/*
 * KidCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "KidCls.h"

KidCls::KidCls() {
	// TODO Auto-generated constructor stub

}

KidCls::~KidCls() {
	// TODO Auto-generated destructor stub
}

void KidCls::makeAnimal(AnimalBuilderCls *animalBuilder){
	animalBuilder->buildAnimalHeader();
	animalBuilder->buildAnimalBody();
	animalBuilder->buildAnimalLeg();
	animalBuilder->buildAnimalArm();
	animalBuilder->buildAnimalTail();
}

std::string KidCls::getName(){
	return this->name;
}

void KidCls::setName(std::string name){
	this->name = name;
}
