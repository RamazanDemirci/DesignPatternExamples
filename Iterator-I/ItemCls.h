/*
 * ItemCls.h
 *
 *  Created on: 26 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ITEMCLS_H_
#define ITEMCLS_H_

#include <string>

class ItemCls {
public:
	ItemCls();
	virtual ~ItemCls();
	ItemCls(std::string name);
	std::string getName();
private:
	std::string name;
};

#endif /* ITEMCLS_H_ */
