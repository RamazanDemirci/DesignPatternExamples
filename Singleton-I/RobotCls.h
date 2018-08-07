/*
 * RobotCls.h
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef ROBOTCLS_H_
#define ROBOTCLS_H_

#include <string>

class RobotCls {
public:

	virtual ~RobotCls();
	std::string getName();
	void setName(std::string name);
	static RobotCls* Instance();
private:
	RobotCls();	//hide the default constructor

	static RobotCls* self;
	std::string name;
};

#endif /* ROBOTCLS_H_ */
