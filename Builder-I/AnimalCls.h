/*
 * AnimalCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef ANIMALCLS_H_
#define ANIMALCLS_H_

#include <string>

class AnimalCls {
public:
	AnimalCls();
	virtual ~AnimalCls();
	virtual void eat() = 0;
	void showMe();
	std::string getHead();
	std::string getBody();
	std::string getLeg();
	std::string getArm();
	std::string getTail();

	void setHead(std::string head);
	void setBody(std::string body);
	void setLeg(std::string leg);
	void setArm(std::string arm);
	void setTail(std::string tail);
private:
	std::string head;
	std::string body;
	std::string leg;
	std::string arm;
	std::string tail;
};

#endif /* ANIMALCLS_H_ */
