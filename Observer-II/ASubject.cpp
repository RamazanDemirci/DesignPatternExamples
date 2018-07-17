/*
 * ASubject.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "ASubject.h"
#include <algorithm>

using namespace std;

namespace Observer {

ASubject::ASubject() {
	// TODO Auto-generated constructor stub

}

ASubject::~ASubject() {
	// TODO Auto-generated destructor stub
}

void ASubject::Attach(Shop *shop)
{
    list.push_back(shop);
}

void ASubject::Detach(Shop *shop)
{
    list.erase(std::remove(list.begin(), list.end(), shop), list.end());
}

void ASubject::Notify(float price)
{
    for(vector<Shop*>::const_iterator iter = list.begin(); iter != list.end(); ++iter)
    {
        if(*iter != 0)
        {
            (*iter)->Update(price);
        }
    }
}

} /* namespace Observer */
