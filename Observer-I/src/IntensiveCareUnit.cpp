/*
 * IntensiveCareUnit.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <stdio.h>
#include "Doctor.h"
#include "Patient.h"
#include "Nurse.h"
#include "PatientRelative.h"

//int main(int argc, char *argv[])
int main()
{
	Doctor *doctor01 = new Doctor("John Doe");
	Doctor *doctor02 = new Doctor("Jane Doe");
	Doctor *doctor03 = new Doctor("Mike Square");

	Nurse *nurse01 = new Nurse("Jessica Smith");
	Nurse *nurse02 = new Nurse("Mary Claire");
	Nurse *nurse03 = new Nurse("Monica Bellucci");

	printf("\n------------------------------------");

	Patient *patient01 = new Patient("James Smith");
	//patient01->addObserver(doctor01);
	//patient01->addObserver(doctor02);
	//patient01->addObserver(nurse01);

	printf("\nPatient %s is observed by doctor(s) : %s, %s nurses(s) : %s"
				, patient01->getName()
				, doctor01->getName()
				, doctor02->getName()
				, nurse01->getName());
		patient01->setState("Heart rate is unstable");

	printf("\n------------------------------------");

	PatientRelative *patientRelative01 = new PatientRelative("Harry Kane");
	patientRelative01->addObserver(doctor01);
	patientRelative01->addObserver(doctor02);
	patientRelative01->addObserver(nurse01);

	printf("\nPatientRelative %s is observed by doctor(s) : %s, %s nurses(s) : %s"
			, patientRelative01->getName()
			, doctor01->getName()
			, doctor02->getName()
			, nurse01->getName());
	char str[300];
	sprintf(str, "Patient %s state is status very criticle please come here emergency!"
			, patient01->getName());
	patientRelative01->setState(str);

	printf("\n------------------------------------");

	Patient *patient02 = new Patient("Steve Brown");
	patient02->addObserver(doctor01);
	patient02->addObserver(nurse03);
	printf("\nPatient %s is observed by doctor(s) : %s, nurses(s) :%s"
			, patient02->getName()
			, doctor01->getName()
			, nurse03->getName());
	patient02->setState("Blood pressure is high");

	printf("\n------------------------------------");

	Patient *patient03 = new Patient("Amy Micheal");
	patient03->addObserver(doctor02);
	patient03->addObserver(doctor03);
	patient03->addObserver(nurse02);
	patient03->addObserver(nurse03);
	printf("\nPatient %s is observed by doctor(s) : %s, %s nurses(s) :%s, %s"
			, patient03->getName()
			, doctor02->getName()
			, doctor03->getName()
			, nurse02->getName()
			, nurse03->getName());
	patient03->setState("Blood pressure is low");
}
