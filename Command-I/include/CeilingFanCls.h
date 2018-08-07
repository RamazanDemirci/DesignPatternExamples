/*
 * CeilingFanCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CEILINGFANCLS_H_
#define CEILINGFANCLS_H_


#include <string>

class CeilingFanCls {
public:
	CeilingFanCls();
	virtual ~CeilingFanCls();
	CeilingFanCls(std::string location);
	void off();
	void low();
	void medium();
	void high();
	int getSpeed();

	static const int HIGH = 3;
	static const int MEDIUM  = 2;
	static const int LOW = 1;
	static const int OFF = 0;
private:
	std::string location;
	int speed;
};

#endif /* CEILINGFANCLS_H_ */
