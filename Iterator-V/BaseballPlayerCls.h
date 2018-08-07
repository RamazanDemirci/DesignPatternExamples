/*
 * BaseballPlayerCls.h
 *
 *  Created on: 30 Tem 2018
 *      Author: tr1d5042
 */

#ifndef BASEBALLPLAYERCLS_H_
#define BASEBALLPLAYERCLS_H_

#include <string>

class BaseballPlayerCls {
public:
	BaseballPlayerCls(std::string name,
			std::string position,
			char swingType);BaseballPlayerCls();
	virtual ~BaseballPlayerCls();

	std::string GetName() const {
		return m_name;
	}
	std::string GetPosition() const {
		return m_position;
	}
	char GetSwingType() const {
		return m_swingType;
	}

private:
	std::string m_name;
	std::string m_position;
	char m_swingType;
};

#endif /* BASEBALLPLAYERCLS_H_ */
