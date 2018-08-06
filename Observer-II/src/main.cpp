/*
 * main.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <iostream>
#include "SubjectCls.h"
#include "DummyProductCls.h"
#include "ShopCls.h"
#include "ObserverIfc.h"

using namespace Observer;

int main(int argc, char* argv[])
{
    DummyProductCls turkishDelight("Turkish Delight");
    DummyProductCls turkishKebab("Turkish Kebab");

    // We have four shops wanting to keep updated price set by product owner
    ShopCls shop1("Restaurant 1");
    ShopCls shop2("Restaurant 2");
    ShopCls shop3("Restaurant 3");

    turkishDelight.Attach((ObserverIfc*)&shop1);
    turkishDelight.Attach((ObserverIfc*)&shop2);
    turkishDelight.Attach((ObserverIfc*)&shop3);

    turkishKebab.Attach((ObserverIfc*)&shop1);
    turkishKebab.Attach((ObserverIfc*)&shop3);

    //Now lets try changing the products price, this should update the shops automatically
    printf("\n#####1st Update#####");
    turkishDelight.ChangePrice(23.0f);
    printf("\n#####2nd Update#####");
    turkishKebab.ChangePrice(42.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    turkishDelight.Detach((ObserverIfc*)&shop2);
    turkishKebab.Attach((ObserverIfc*)&shop2);
    printf("\n#####3rd Update#####");
    //Now lets try changing the products price again
    turkishDelight.ChangePrice(26.0f);
    turkishKebab.ChangePrice(40.0);

    turkishDelight.Detach((ObserverIfc*)&shop1);
    printf("\n#####4th Update#####");
    turkishKebab.ChangePrice(41.5);

    return 0;
}

