/*
 * Haber.h
 *
 *  Created on: 15 Tem 2018
 *      Author: tr1d5042
 */

#ifndef HABER_H_
#define HABER_H_

#include <string>

class Haber {
public:
	Haber();
	virtual ~Haber();
private:
	std::string mBaslik;
	std::string mAciklama;
public:
	Haber(std::string baslik, std::string aciklama);
	const char* getBaslik();
	void setBaslik(std::string mBaslik);
	const char* getAciklama();
	void setAciklama(std::string mAciklama);
};

#endif /* HABER_H_ */
