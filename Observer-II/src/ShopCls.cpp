/*
 * ConcreteObserver.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <ShopCls.h>

namespace Observer {

ShopCls::ShopCls() {
	// TODO Auto-generated constructor stub

}

ShopCls::~ShopCls() {
	// TODO Auto-generated destructor stub
}

ShopCls::ShopCls(std::string name)
{
    this->name = name;
}

void ShopCls::Update(float price)
{
    this->price = price;

    //Lets print on console just to test the working
    std::cout << "Price at "<< name << " is now "<< price << "\n";
}

} /* namespace Observer */
