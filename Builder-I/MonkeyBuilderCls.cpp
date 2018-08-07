/*
 * MoneyBuilderCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "MonkeyBuilderCls.h"
#include "MonkeyCls.h"

MonkeyBuilderCls::MonkeyBuilderCls() {
	// TODO Auto-generated constructor stub
	this->animal = new MonkeyCls();
}

MonkeyBuilderCls::~MonkeyBuilderCls() {
	// TODO Auto-generated destructor stub
}

/*virtual*/ void MonkeyBuilderCls::buildAnimalHeader(){
	this->animal->setHead("\nMonkey \"head\" has been built");
}

/*virtual*/ void MonkeyBuilderCls::buildAnimalBody(){
	this->animal->setBody("\nMonkey \"body\" has been built");
}

/*virtual*/ void MonkeyBuilderCls::buildAnimalLeg(){
	this->animal->setLeg("\nMonkey \"leg\" has been built");
}

/*virtual*/ void MonkeyBuilderCls::buildAnimalArm(){
	this->animal->setArm("\nMonkey \"arm\" has been built");
}

/*virtual*/ void MonkeyBuilderCls::buildAnimalTail(){
	this->animal->setTail("\nMonkey \"tail\" has been built");
}

