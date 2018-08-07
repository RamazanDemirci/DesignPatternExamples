/*
 * AnimalCls.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "AnimalCls.h"

AnimalCls::AnimalCls() {
	// TODO Auto-generated constructor stub

}

AnimalCls::~AnimalCls() {
	// TODO Auto-generated destructor stub
}

void AnimalCls::showMe(){
	printf("\n%s", this->head.c_str());
	printf("\n%s", this->body.c_str());
	printf("\n%s", this->leg.c_str());
	printf("\n%s", this->arm.c_str());
	printf("\n%s", this->tail.c_str());
}

std::string AnimalCls::getHead(){
	return head;
}

std::string AnimalCls::getBody(){
	return body;
}

std::string AnimalCls::getLeg(){
	return leg;
}

std::string AnimalCls::getArm(){
	return arm;
}

std::string AnimalCls::getTail(){
	return tail;
}

void AnimalCls::setHead(std::string head){
	this->head = head;
}

void AnimalCls::setBody(std::string body){
	this->body = body;
}

void AnimalCls::setLeg(std::string leg){
	this->leg = leg;
}

void AnimalCls::setArm(std::string arm){
	this->arm = arm;
}

void AnimalCls::setTail(std::string tail){
	this->tail = tail;
}
