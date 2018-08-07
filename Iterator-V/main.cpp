/*
 * main.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include "ListIfc.h"
#include "ArrayListCls.h"
#include "ArrayListIteratorCls.h"
#include "BaseballPlayerCls.h"
#include "StdVectorListCls.h"

List<BaseballPlayerCls> * MakeNewYorkMetsLineup() {
	ListIfc < BaseballPlayerCls > *newYorkMetsLineup = new StdVectorListCls<
			BaseballPlayerCls>();

	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Curtis Granderson"), std::string("CF"),
					'L'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Asdrubal Cabrera"), std::string("SS"),
					'S'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Yoenis Cespedes"), std::string("LF"),
					'R'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Jay Bruce"), std::string("RF"), 'L'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Neil Walker"), std::string("2B"), 'S'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Lucas Duda"), std::string("1B"), 'L'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Travis d'Arnaud"), std::string("C"),
					'R'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Jose Reyes"), std::string("SS"), 'S'));
	newYorkMetsLineup->Append(
			BaseballPlayerCls(std::string("Noah Syndergaard"), std::string("P"),
					'L'));

	return newYorkMetsLineup;
}

List<BaseballPlayer> * MakeWashingtonNationalsLineup() {
	List < BaseballPlayer > *washingtonNationalsLineup = new ArrayList<
			BaseballPlayer>();

	washingtonNationalsLineup->Append(
			BaseballPlayerCls(std::string("Adam Eaton"), std::string("CF"), 'L'));
	washingtonNationalsLineup->Append(
			BaseballPlayerCls(std::string("Wilmer Difo"), std::string("SS"), 'R'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Daniel Murphy"), std::string("2B"),
					'L'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Bryce Harper"), std::string("RF"),
					'L'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Ryan Zimmerman"), std::string("1B"),
					'L'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Anthony Rendon"), std::string("3B"),
					'R'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Matt Wieters"), std::string("C"), 'R'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Michael Taylor"), std::string("CF"),
					'R'));
	washingtonNationalsLineup->Append(
			BaseballPlayer(std::string("Stephen Strasburg"), std::string("P"),
					'S'));

	return washingtonNationalsLineup;
}

void PrintLineup(std::string lineupName, Iterator<BaseballPlayer> * iterator) {
	std::cout << lineupName << "\n";

	unsigned int lineupPosition = 1;

	for (iterator->First(); !iterator->IsDone(); iterator->Next()) {
		std::cout << lineupPosition++ << ". " << iterator->CurrentItem()
				<< "\n";
	}

	std::cout << "\n";
}

int main() {
	List < BaseballPlayer > *newYorkMetsLineup = MakeNewYorkMetsLineup();
	Iterator < BaseballPlayer > *newYorkMetsLineupIterator =
			newYorkMetsLineup->CreateIterator();
	PrintLineup(std::string("New York Mets Lineup"), newYorkMetsLineupIterator);
	delete newYorkMetsLineupIterator;
	delete newYorkMetsLineup;

	List < BaseballPlayer > *washingtonNationalsLineup =
			MakeWashingtonNationalsLineup();
	Iterator < BaseballPlayer > *washingtonNationalsLineupIterator =
			washingtonNationalsLineup->CreateIterator();
	PrintLineup(std::string("Washington Nationals Lineup"),
			washingtonNationalsLineupIterator);
	delete washingtonNationalsLineupIterator;
	delete washingtonNationalsLineup;

	return 0;
}

