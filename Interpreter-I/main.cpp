/*
 * main.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

/*
 * https://sourcemaking.com/design_patterns/interpreter/cpp/1
 * */


#include <iostream>

#include "HundredCls.h"
#include "RomanInterpreterCls.h"
#include "OneCls.h"
#include "TenCls.h"
#include "ThousandCls.h"

using namespace std;

RomanInterpreterCls::RomanInterpreterCls() {
	printf("\n%s", __FUNCTION__);
	// use 1-arg ctor to avoid infinite loop
	thousands = new ThousandCls(1);
	hundreds = new HundredCls(1);
	tens = new TenCls(1);
	ones = new OneCls(1);
}

int RomanInterpreterCls::interpret(char* input) {
	printf("\n%s", __FUNCTION__);
	int total = 0;
	this->thousands->interpret(input, total);
	this->hundreds->interpret(input, total);
	this->tens->interpret(input, total);
	this->ones->interpret(input, total);
	if (strcmp(input, "")){
		return 0;	// if input was invalid, return 0
	}
	return total;
}

int main() {
	RomanInterpreterCls interpreter;
	char input[20];
	printf("\nEnter Roman Numeral: ");
	while (cin >> input) {
		printf("\n   interpretation is %d", interpreter.interpret(input));
		printf("\nEnter Roman Numeral: ");
	}
}

