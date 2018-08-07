/*
 * LightCls.h
 *
 *  Created on: 24 Tem 2018
 *      Author: tr1d5042
 */

#ifndef LIGHTCLS_H_
#define LIGHTCLS_H_

#include <string>

class LightCls {
public:
	LightCls();
	virtual ~LightCls();
	LightCls(std::string location);
	void on();
	void off();
	void dim(int level);
	int getLevel();
private:
	std::string location;
	int level;
};

#endif /* LIGHTCLS_H_ */
