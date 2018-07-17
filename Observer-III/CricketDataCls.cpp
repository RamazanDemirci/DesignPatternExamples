/*
 * CricketDataCls.cpp
 *
 *  Created on: 14 Tem 2018
 *      Author: tr1d5042
 */

#include <algorithm>
#include "CricketDataCls.h"

using namespace std;

CricketDataCls::CricketDataCls() {
	//printf("\n%s", __FUNCTION__);
	// TODO Auto-generated constructor stub

}

CricketDataCls::~CricketDataCls() {
	//printf("\n%s", __FUNCTION__);
	// TODO Auto-generated destructor stub
}

void CricketDataCls::registerObserver(ObserverIfc *observer){
	//printf("\n%s", __FUNCTION__);
	observerList.push_back(observer);
}

void CricketDataCls::unregisterObserver(ObserverIfc *observer){
	//printf("\n%s", __FUNCTION__);
	observerList.erase(std::remove(observerList.begin(), observerList.end(), observer), observerList.end());
}

void CricketDataCls::notifyObservers(){
	//printf("\n%s", __FUNCTION__);

	for(std::vector<ObserverIfc*>::const_iterator iter = observerList.begin(); iter != observerList.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(this->runs, this->wickets, this->overs);
		}
	}

/*
	std::for_each(observerList.begin(), observerList.end(),
	        [this](ObserverIfc *observer)
	        {
				observer->update(this->runs, this->wickets, this->overs);
	        }
	);
*/
/*
	for (ObserverIfc *observer = observerList.begin(); observer != observerList.end(); ++observer)
	{
		observer->update(this->runs, this->wickets, this->overs);
	}
*/
}

int CricketDataCls::getLatestRuns(){
	//printf("\n%s", __FUNCTION__);
	//return 90 for simplicity
	return 90;
}

int CricketDataCls::getLatestWickets(){
	//printf("\n%s", __FUNCTION__);
	//return 2 for simplicity
	return 2;
}

float CricketDataCls::getLatestOvers(){
	//printf("\n%s", __FUNCTION__);
	//return 10.2 for simplicity.
	return (float)10.2;
}

void CricketDataCls::dataChanged(){
	//printf("\n%s", __FUNCTION__);
	//get latest data
	runs = getLatestRuns();
	wickets = getLatestWickets();
	overs = getLatestOvers();

	notifyObservers();
}

