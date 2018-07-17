/*
 * main.cpp
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include <iostream>
#include "SporHaberi.h"
#include "FutbolHaberi.h"
#include "FutbolTakipci.h"
#include "Haber.h"

int main()
{
	SporHaberi *futbolHaberi = new FutbolHaberi();

	Takipci *futbolTakipci1 = new FutbolTakipci(">>Lebron James<<");
	futbolHaberi->subscribe(futbolTakipci1);

	Takipci *futbolTakipci2 = new FutbolTakipci(">>Micheal Jordan<<");
	futbolHaberi->subscribe(futbolTakipci2);

	Haber *haber1 = new Haber("Transfer Haberi", "\tJuventus Ronaldo Transferini Duyurdu. \n\t\tDudak u�uklatan bir fiyata anla�ma sa�land�. \n\t\t�mzalar �n�m�zdeki g�nlerde at�lacak");
	futbolHaberi->addNewHaber(haber1);

	futbolHaberi->unsubscribe(futbolTakipci2);

	Haber *haber2 = new Haber("Transfer Haberi", "\tReal Madrid Ronaldo'nun yerini dolduracak yeni bir s�perstar aray���nda. \n\t\tPSG'nin prensi Neymar ile g�r���ld���ne dair dedikodular var. \n\t\tAyr�nt�lar an ve an burada. ");

	futbolHaberi->addNewHaber(haber2);

	int a;
	std::cin >> a;
}


