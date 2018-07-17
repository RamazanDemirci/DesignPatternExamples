/*
 * CricketDataCls.h
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#ifndef CRICKET_DATA_CLS_H_
#define CRICKET_DATA_CLS_H_

#include <vector>
#include "ObserverIfc.h"
#include "SubjectIfc.h"

class CricketDataCls : SubjectIfc {
public:
	CricketDataCls();
	virtual ~CricketDataCls();
public:
	int runs;
	int wickets;
	float overs;
	std::vector<ObserverIfc*> observerList;

public:
	void registerObserver(ObserverIfc *observer);
	void unregisterObserver(ObserverIfc *observer);
	void notifyObservers();
	int getLatestRuns();
	int getLatestWickets();
	float getLatestOvers();
	void dataChanged();
};

#endif /* CRICKET_DATA_CLS_H_ */
