/*
 * Patient.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */
#include <ObservableCls.h>
#include <algorithm>

using namespace std;

ObservableCls::ObservableCls() {
	// TODO Auto-generated constructor stub
}

ObservableCls::~ObservableCls() {
	// TODO Auto-generated destructor stub
}

void ObservableCls::addObserver(ObserverIfc *observer){
	list.push_back(observer);
}

void ObservableCls::removeObserver(ObserverIfc *observer){
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
