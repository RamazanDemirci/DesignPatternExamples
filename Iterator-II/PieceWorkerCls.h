/*
 * PieceWorkerCls.h
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#ifndef PIECEWORKERCLS_H_
#define PIECEWORKERCLS_H_

#include <string>
#include "EmployeeIfc.h"

class PieceWorkerCls : public EmployeeIfc {
public:
	PieceWorkerCls();
	virtual ~PieceWorkerCls();
	PieceWorkerCls(std::string name, double w, int q);
	void setWagePerPiece(double w);
	void setQuantity(int q);
	std::string getName();
	double earnings();
	std::string toString();
private:
	double wagePerPiece;
	int quantity;
	std::string name;
};

#endif /* PIECEWORKERCLS_H_ */
