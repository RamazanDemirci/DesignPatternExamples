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

void SubjectCls::Attach(ShopCls *shop)
{
    list.push_back(shop);
}

void SubjectCls::Detach(ShopCls *shop)
{
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void SubjectCls::Notify(float price)
{
    for(vector<ShopCls*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(price);
        }
    }
}

} /* namespace Observer */
