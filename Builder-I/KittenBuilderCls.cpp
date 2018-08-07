/*
 * KittenBuilderCls.cpp
 *
 *  Created on: 3 Ağu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "KittenBuilderCls.h"
#include "KittenCls.h"

KittenBuilderCls::KittenBuilderCls() {
	// TODO Auto-generated constructor stub
	this->animal = new KittenCls();
}

KittenBuilderCls::~KittenBuilderCls() {
	// TODO Auto-generated destructor stub
}

/*virtual*/ void KittenBuilderCls::buildAnimalHeader(){
	this->animal->setHead("\nKitten \"head\" has been built");
}

/*virtual*/ void KittenBuilderCls::buildAnimalBody(){
	this->animal->setBody("\nKitten \"body\" has been built");
}

/*virtual*/ void KittenBuilderCls::buildAnimalLeg(){
	this->animal->setLeg("\nKitten \"leg\" has been built");
}

/*virtual*/ void KittenBuilderCls::buildAnimalArm(){
	this->animal->setArm("\nKitten \"arm\" has been built");
}

/*virtual*/ void KittenBuilderCls::buildAnimalTail(){
	this->animal->setTail("\nKitten \"tail\" has been built");
}
