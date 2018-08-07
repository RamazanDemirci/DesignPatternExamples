/*
 * main.cpp
 *
 *  Created on: 27 Tem 2018
 *      Author: tr1d5042
 */

#include <vector>

#include "CommissionWorkerCls.h"
#include "ManagerCls.h"
#include "PieceWorkerCls.h"
#include "HourlyWorkerCls.h"

int main(){
	 std::vector<EmployeeIfc*> workeList;
	 workeList.push_back(new ManagerCls("Bill", 800.00));
	 workeList.push_back(new CommissionWorkerCls("Newt", 400.0, 3.75, 159.99));
	 workeList.push_back(new PieceWorkerCls("Al", 2.5, 200));
	 workeList.push_back(new HourlyWorkerCls("Babara", 13.75, 40));
	 workeList.push_back(new ManagerCls("Peter", 1200.00));
	 workeList.push_back(new CommissionWorkerCls("Margret", 600.0,5.5, 200.25));
	 workeList.push_back(new PieceWorkerCls("Mark", 4.5, 333));
	 workeList.push_back(new HourlyWorkerCls("William", 31.25, 50));

	 printf("Use built-in iterator:");
	 /*
	 Iterator iterator = list.iterator();
	 while(iterator.hasNext()) {
		 Employee em = (Employee)iterator.next();
		 System.out.print(em + " earns $");
		 System.out.println(em.earnings());
	 }
	 */
 }
