/*
 * IObserver.h
 *
 *  Created on: 2 Tem 2018
 *      Author: tr1d5042
 */

#ifndef IOBSERVER_H_
#define IOBSERVER_H_
//#pragma once

class IObserver
{
public:
    virtual void Update(float price) = 0;
};


#endif /* IOBSERVER_H_ */
