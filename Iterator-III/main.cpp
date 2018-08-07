/*
 * main.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include <iostream>
#include "StackCls.h"
#include "StackIteratorCls.h"

using namespace std;

StackIteratorCls *StackCls::createIterator()const
{
  return new StackIteratorCls(this);
}

bool operator == (const StackCls &l, const StackCls &r)
{
  // 3. Clients ask the container object to create an iterator object
  StackIteratorCls *itl = l.createIterator();
  StackIteratorCls *itr = r.createIterator();
  // 4. Clients use the first(), isDone(), next(), and currentItem() protocol
  for (itl->first(), itr->first(); !itl->isDone(); itl->next(), itr->next())
    if (itl->currentItem() != itr->currentItem())
      break;
  bool ans = itl->isDone() && itr->isDone();
  delete itl;
  delete itr;
  return ans;
}

int main()
{
  StackCls s1;
  for (int i = 1; i < 5; i++)
    s1.push(i);
  StackCls s2(s1), s3(s1), s4(s1), s5(s1);
  s3.pop();
  s5.pop();
  s4.push(2);
  s5.push(9);
  cout << "1 == 2 is " << (s1 == s2) << endl;
  cout << "1 == 3 is " << (s1 == s3) << endl;
  cout << "1 == 4 is " << (s1 == s4) << endl;
  cout << "1 == 5 is " << (s1 == s5) << endl;
}

