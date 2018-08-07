/*
 * DriverCls.h
 *
 *  Created on: 5 Aðu 2018
 *      Author: tr1d5042
 */

#ifndef DRIVERCLS_H_
#define DRIVERCLS_H_

class DriverCls {
public:
	DriverCls();
	virtual ~DriverCls();
	DriverCls(int age);
	int getAge();
	void setAge(int age);
private:
	int age;
};

#endif /* DRIVERCLS_H_ */
