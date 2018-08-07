/*
 * KidCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef KIDCLS_H_
#define KIDCLS_H_

#include <string>
#include "TalkableIfc.h"

class KidCls : public TalkableIfc {
public:
	KidCls();
	virtual ~KidCls();

	/*virtual*/ void TellMeAboutName();
	/*virtual*/ void TellMeAboutAge();
	/*virtual*/ void TellMeAboutFavorFood();

	std::string getName();
	int getAge();
	std::string getFavorFood();

	void setName(std::string name);
	void setAge(int age);
	void setFavorFood(std::string favorFood);
private:
	std::string name;
	int age;
	std::string favorFood;
};

#endif /* KIDCLS_H_ */
