/*
 * BaseballPlayerCls.cpp
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#include "BaseballPlayerCls.h"



BaseballPlayerCls::BaseballPlayerCls()
  : m_swingType('\0') {
	// TODO Auto-generated constructor stub
}

BaseballPlayerCls::~BaseballPlayerCls() {
	// TODO Auto-generated destructor stub
}

BaseballPlayerCls::BaseballPlayerCls
  (std::string name,
   std::string position,
   char swingType)
  : m_name(name),
    m_position(position),
    m_swingType(swingType) {

}

std::ostream& operator<<(std::ostream& outc,
		                 const BaseballPlayerCls & player)
{
	std::string tabsAfterName =
	     (player.GetName().size() >= 16) ?
	      std::string("\t") : std::string("\t\t");;
	outc << player.GetPosition() << "\t"
             << player.GetName() << tabsAfterName
             << player.GetSwingType();

	return outc;
}

