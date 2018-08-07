/*
 * main.cpp
 *
 *  Created on: 3 Aðu 2018
 *      Author: tr1d5042
 */

#include "KidCls.h"
#include "MonkeyCls.h"
#include "KittenCls.h"
#include "MonkeyBuilderCls.h"
#include "KittenBuilderCls.h"

/*
 * ref : https://www.codeproject.com/Articles/42415/Builder-Design-Pattern
 * */

int main(){
	//create a constructor object to start building
	KidCls *kid = new KidCls();
	kid->setName("Elizabeth");

	//Elizabeth use Monkey mold to make a monkey
	printf("\n%s start a monkey", kid->getName().c_str());
	AnimalBuilderCls *builderMonkey = new MonkeyBuilderCls();
	kid->makeAnimal(builderMonkey);
	builderMonkey->animal->showMe();
	printf("\n/***********************************************************/");
	//Elizabeth use Kitten mold to make a monkey
	printf("\n%s start a kitten", kid->getName().c_str());
	AnimalBuilderCls *builderKitten = new KittenBuilderCls();
	kid->makeAnimal(builderKitten);
	builderKitten->animal->showMe();

	return 0;
}

