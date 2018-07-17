/*
 * main.cpp
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#include "AverageScoreDisplayCls.h"
#include "CurrentScoreDisplayCls.h"
#include "CricketDataCls.h"

int main()
{
	// create objects for testing
	ObserverIfc *averageScoreDisplay =
			new AverageScoreDisplayCls();
	ObserverIfc *currentScoreDisplay =
			new CurrentScoreDisplayCls();

	// pass the displays to Cricket data
	CricketDataCls *cricketData = new CricketDataCls();

	// register display elements
	cricketData->registerObserver(averageScoreDisplay);
	cricketData->registerObserver(currentScoreDisplay);
	printf("\n------------------------------------");
	// in real app you would have some logic to
	// call this function when data changes
	cricketData->dataChanged();

	//remove an observer
	cricketData->unregisterObserver(averageScoreDisplay);

	// now only currentScoreDisplay gets the
	// notification
	printf("\n------------------------------------");
	cricketData->dataChanged();

}


