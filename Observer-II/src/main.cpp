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
    DummyProductCls product1;

    // We have four shops wanting to keep updated price set by product owner
    ShopCls shop1("Shop 1");
    ShopCls shop2("Shop 2");
    ShopCls shop3("Shop 3");

    product1.Attach(&shop1);
    product1.Attach(&shop2);
    product1.Attach(&shop3);

    //Now lets try changing the products price, this should update the shops automatically
    product1.ChangePrice(23.0f);

    //Now shop2 is not interested in new prices so they unsubscribe
    product1.Detach(&shop2);

    //Now lets try changing the products price again
    product1.ChangePrice(26.0f);

    int a;
    std::cin >> a;
    return 0;
}

