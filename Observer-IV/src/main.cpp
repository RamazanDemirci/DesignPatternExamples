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

	Haber *haber1 = new Haber("Transfer Haberi", "\tJuventus Ronaldo Transferini Duyurdu. \n\t\tDudak uçuklatan bir fiyata anlaþma saðlandý. \n\t\tÝmzalar önümüzdeki günlerde atýlacak");
	futbolHaberi->addNewHaber(haber1);

	futbolHaberi->unsubscribe(futbolTakipci2);

	Haber *haber2 = new Haber("Transfer Haberi", "\tReal Madrid Ronaldo'nun yerini dolduracak yeni bir süperstar arayýþýnda. \n\t\tPSG'nin prensi Neymar ile görüþüldüðüne dair dedikodular var. \n\t\tAyrýntýlar an ve an burada. ");

	futbolHaberi->addNewHaber(haber2);

	int a;
	std::cin >> a;
}


