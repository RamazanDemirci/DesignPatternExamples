/*
 * PieceWorkerCls.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include "PieceWorkerCls.h"

PieceWorkerCls::PieceWorkerCls() {
	// TODO Auto-generated constructor stub

}

PieceWorkerCls::~PieceWorkerCls() {
	// TODO Auto-generated destructor stub
}

PieceWorkerCls::PieceWorkerCls(std::string name, double w, int q){
	this->name = name;
	setWagePerPiece(w);
	setQuantity(q);
}

void PieceWorkerCls::setWagePerPiece(double w){
	if(w > 0){
		wagePerPiece = w;
	}
	else{
		wagePerPiece = 0;
	}
}

void PieceWorkerCls::setQuantity(int q){
	if(q > 0){
		wagePerPiece = q;
	}
	else{
		wagePerPiece = 0;
	}
}

std::string PieceWorkerCls::getName(){
	return name;
}

double PieceWorkerCls::earnings(){
	return (quantity * wagePerPiece);
}

std::string PieceWorkerCls::toString(){
	return std::string("Piece worker: " + getName());
}

