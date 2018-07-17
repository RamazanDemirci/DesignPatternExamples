/*
 * Patient.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */
#include <algorithm>
#include "Observable.h"

using namespace std;

Observable::Observable() {
	// TODO Auto-generated constructor stub
}

Observable::~Observable() {
	// TODO Auto-generated destructor stub
}

void Observable::addObserver(ObserverIfc *observer){
	list.push_back(observer);
}

void Observable::removeObserver(ObserverIfc *observer){
	list.erase(std::remove(list.begin(), list.end(), observer), list.end());
}
/*
void Observable::Notify(std::string notify){
	//printf("\n%s", __FUNCTION__);
	for(vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
	{
		if(*iter != 0)
		{
			(*iter)->update(notify);
		}
	}
}
*/
