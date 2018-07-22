/*
 * RequestCls.h
 *
 *  Created on: 21 Tem 2018
 *      Author: tr1d5042
 */

#ifndef REQUESTCLS_H_
#define REQUESTCLS_H_

typedef enum {
	  Contact
	, Messages
	, Memory
	, Location
}RequestType;

class RequestCls {
public:
	RequestCls();
	virtual ~RequestCls();
protected:
	RequestCls(RequestType type);
public:
	RequestType type;
};

#endif /* REQUESTCLS_H_ */
