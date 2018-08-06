/*
 * ASubject.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <SubjectCls.h>
#include <algorithm>

using namespace std;

namespace Observer {

SubjectCls::SubjectCls() {
	// TODO Auto-generated constructor stub

}

SubjectCls::~SubjectCls() {
	// TODO Auto-generated destructor stub
}

void SubjectCls::Attach(ObserverIfc *shop)
{
    list.push_back(shop);
}

void SubjectCls::Detach(ObserverIfc *shop)
{
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void SubjectCls::Notify()
{
    for(vector<ObserverIfc*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
        	/*Call all observers Update() Funtion for notify them about update*/
        	/*We know actually only observer interface and its update() method*/
        	/*We dont care concrete observer class/type*/
            (*iter)->Update(this);
        }
    }
}

} /* namespace Observer */
