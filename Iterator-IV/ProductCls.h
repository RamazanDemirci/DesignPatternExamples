/*
 * ProductCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PRODUCTCLS_H_
#define PRODUCTCLS_H_

#include <string>

class ProductCls {
public:
	ProductCls();
	virtual ~ProductCls();
	int getProductId();
	void setProductId(int productId);
	std::string getName();
	void setName(std::string name);
	double getListPrice();
	void setListPrice(double listPrice);
	std::string toString();
private:
	int productId;
	std::string name;
	double listPrice;
};

#endif /* PRODUCTCLS_H_ */
