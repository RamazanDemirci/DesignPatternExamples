/*
 * main.cpp
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#include "OneCls.h"
#include "TwoCls.h"

int main()
{
  BaseCls *array[] =
  {
     //&OneCls(), &TwoCls()
		  new OneCls(),
		  new TwoCls()
  };

  for (int i = 0; i < 2; i++)
  {
    array[i]->execute();
    cout << '\n';
  }
}

