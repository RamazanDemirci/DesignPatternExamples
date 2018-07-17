/*
 * FutbolTakipci.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef FUTBOLTAKIPCI_H_
#define FUTBOLTAKIPCI_H_

#include <Takipci.h>
#include <string>

class SporHaberi;

class FutbolTakipci : public Takipci{
public:
	FutbolTakipci();
	virtual ~FutbolTakipci();
private:
	std::string misim;
public:
	FutbolTakipci(std::string isim);
	void update(SporHaberi *sporHaberi);
};

#endif /* FUTBOLTAKIPCI_H_ */
