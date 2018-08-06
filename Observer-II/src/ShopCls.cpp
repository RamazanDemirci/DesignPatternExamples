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

void ShopCls::Update(SubjectCls *subject)
{
    this->price = price;

    //Lets print on console just to test the working
    printf("\nPrice of product \"%s\" at \"%s\" is now \"%.2f\""
    		, subject->name.c_str()
			, this->name.c_str()
			, subject->price);
}

} /* namespace Observer */
