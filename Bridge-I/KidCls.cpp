/*
 * KidCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "KidCls.h"

KidCls::KidCls() {
	// TODO Auto-generated constructor stub
//	printf("\n%s", __FUNCTION__);
}

KidCls::~KidCls() {
	// TODO Auto-generated destructor stub
//	printf("\n%s", __FUNCTION__);
}

void KidCls::TellMeAboutName(){
//	printf("\n%s", __FUNCTION__);
	printf("\nMy name is %s", name.c_str());
}

void KidCls::TellMeAboutAge(){
//	printf("\n%s", __FUNCTION__);
	printf("\nI am %d years old", age);
}

void KidCls::TellMeAboutFavorFood(){
//	printf("\n%s", __FUNCTION__);
	printf("\nMy favor food is %s", favorFood.c_str());
}

std::string KidCls::getName(){
//	printf("\n%s", __FUNCTION__);
	return name;
}

int KidCls::getAge(){
//	printf("\n%s", __FUNCTION__);
	return age;
}

std::string KidCls::getFavorFood(){
	printf("\n%s", __FUNCTION__);
	return favorFood;
}

void KidCls::setName(std::string name){
	printf("\n%s", __FUNCTION__);
	this->name = name;
}

void KidCls::setAge(int age){
	printf("\n%s", __FUNCTION__);
	this->age = age;
}

void KidCls::setFavorFood(std::string favorFood){
	printf("\n%s", __FUNCTION__);
	this->favorFood = favorFood;
}
