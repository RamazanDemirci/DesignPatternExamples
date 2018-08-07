/*
 * RomanInterpreterCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef ROMANINTERPRETERCLS_H_
#define ROMANINTERPRETERCLS_H_

#include <string>

class ThousandCls;
class HundredCls;
class TenCls;
class OneCls;

#include <iostream>

class RomanInterpreterCls {
public:
	RomanInterpreterCls();
	virtual ~RomanInterpreterCls();
	RomanInterpreterCls(int) {
	}
	// ctor for subclasses, avoids infinite loop
	int interpret(char* input); // interpret() for client
	virtual void interpret(char *input, int &total) {
		printf("\n%s", __FUNCTION__);
		int index = 0;	// for internal use

		if (!strncmp(input, nine(), 2)) {
			total += 9 * multiplier();
			index += 2;
		} else if (!strncmp(input, four(), 2)) {
			total += 4 * multiplier();
			index += 2;
		} else {
			if (input[0] == five()) {
				total += 5 * multiplier();
				index = 1;
			} else {
				index = 0;
			}

			for (int end = index + 3; index < end; index++) {
				if (input[index] == one()) {
					total += 1 * multiplier();
				} else {
					break;
				}
			}
		}
		printf("\nindex : %d", index);
		printf("\ninput : %s", input);
		printf("\ntotal : %d", total);
		strcpy(input, &(input[index])); // TODO:: patlýyor burayý açýnca bakýlacak
	} // remove leading chars processed
protected:
	// cannot be pure virtual because client asks for instance
	virtual char one() {
		printf("\n%s", __FUNCTION__);
		return ' ';
	}
	virtual char *four() {
		printf("\n%s", __FUNCTION__);
		return " ";
	}
	virtual char five() {
		printf("\n%s", __FUNCTION__);
		return ' ';
	}
	virtual char *nine()  {
		printf("\n%s", __FUNCTION__);
		return "";
	}
	virtual int multiplier() {
		printf("\n%s", __FUNCTION__);
		return 1;
	}
private:
	RomanInterpreterCls *thousands;
	RomanInterpreterCls *hundreds;
	RomanInterpreterCls *tens;
	RomanInterpreterCls *ones;

};

#endif /* ROMANINTERPRETERCLS_H_ */
