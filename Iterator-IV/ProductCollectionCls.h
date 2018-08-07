/*
 * ProductCollectionCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PRODUCTCOLLECTIONCLS_H_
#define PRODUCTCOLLECTIONCLS_H_

#include <vector>
#include "ProductCls.h"

class ProductCollectionCls {
public:
	ProductCollectionCls();
	virtual ~ProductCollectionCls();
	int getProductCount();
private:
	std::vector<ProductCls*> list;
};

#endif /* PRODUCTCOLLECTIONCLS_H_ */
