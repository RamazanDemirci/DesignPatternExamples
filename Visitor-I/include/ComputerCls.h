/*
 * ComputerCls.h
 *
 *  Created on: 19 Tem 2018
 *      Author: tr1d5042
 */

#ifndef COMPUTERCLS_H_
#define COMPUTERCLS_H_

#include <vector>
#include "ComputerPartIfc.h"
#include "ComputerPartVisitorIfc.h"

class ComputerCls : public ComputerPartIfc {
public:
	ComputerCls();
	virtual ~ComputerCls();
	void accept(ComputerPartVisitorIfc *visitor);
private:
	std::vector<ComputerPartIfc*> partList;
};

#endif /* COMPUTERCLS_H_ */
