/*
 * main.cpp
 *
 *  Created on: 1 Aðu 2018
 *      Author: tr1d5042
 */

#include <iostream>
#include "CommandCls.h"
#include "MementoCls.h"
#include "NumberCls.h"

using namespace std;

CommandCls *CommandCls::commandList[];
MementoCls *CommandCls::mementoList[];
int CommandCls::numCommands = 0;
int CommandCls::highWater = 0;

int main()
{
  int i;
  cout << "Integer: ";
  cin >> i;
  NumberCls *object = new NumberCls(i);

  CommandCls *commands[3];
  commands[1] = new CommandCls(object, &NumberCls::dubble);
  commands[2] = new CommandCls(object, &NumberCls::half);

  cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
  cin >> i;

  while (i)
  {
    if (i == 3)
      CommandCls::undo();
    else if (i == 4)
      CommandCls::redo();
    else
      commands[i]->execute();
    cout << "   " << object->getValue() << endl;
    cout << "Exit[0], Double[1], Half[2], Undo[3], Redo[4]: ";
    cin >> i;
  }
}

