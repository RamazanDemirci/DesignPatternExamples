/*
 * SporHaberi.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef SPORHABERI_H_
#define SPORHABERI_H_

#include <Takipci.h>
#include <vector>

class Haber;

class SporHaberi {
public:
	SporHaberi();
	virtual ~SporHaberi();
private:
	std::vector<Takipci*> takipciler;
	std::vector<Haber*> haberler;
	Haber *mHaber;
public:
	void subscribe(Takipci *);
	void unsubscribe(Takipci *);
	void notifyChanges();
	void addNewHaber(Haber *haber);
	Haber* getHaber();
};

#endif /* SPORHABERI_H_ */
