/*
 * IntensiveCareUnit.cpp
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#include <DoctorCls.h>
#include <NurseCls.h>
#include <PatientCls.h>
#include <PatientRelativeCls.h>
#include <stdio.h>

//int main(int argc, char *argv[])
int main()
{
	DoctorCls *doctor01 = new DoctorCls("John Doe");
	DoctorCls *doctor02 = new DoctorCls("Jane Doe");
	DoctorCls *doctor03 = new DoctorCls("Mike Square");

	NurseCls *nurse01 = new NurseCls("Jessica Smith");
	NurseCls *nurse02 = new NurseCls("Mary Claire");
	NurseCls *nurse03 = new NurseCls("Monica Bellucci");

	printf("\n------------------------------------");

	PatientCls *patient01 = new PatientCls("James Smith");
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

	PatientRelativeCls *patientRelative01 = new PatientRelativeCls("Harry Kane");
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

	PatientCls *patient02 = new PatientCls("Steve Brown");
	patient02->addObserver(doctor01);
	patient02->addObserver(nurse03);
	printf("\nPatient %s is observed by doctor(s) : %s, nurses(s) :%s"
			, patient02->getName()
			, doctor01->getName()
			, nurse03->getName());
	patient02->setState("Blood pressure is high");

	printf("\n------------------------------------");

	PatientCls *patient03 = new PatientCls("Amy Micheal");
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
