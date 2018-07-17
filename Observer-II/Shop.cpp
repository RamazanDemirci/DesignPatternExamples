/*
 * ConcreteObserver.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include "Shop.h"

namespace Observer {

Shop::Shop() {
	// TODO Auto-generated constructor stub

}

Shop::~Shop() {
	// TODO Auto-generated destructor stub
}

Shop::Shop(std::string name)
{
    this->name = name;
}

void Shop::Update(float price)
{
    this->price = price;

    //Lets print on console just to test the working
    std::cout << "Price at "<< name << " is now "<< price << "\n";
}

} /* namespace Observer */
