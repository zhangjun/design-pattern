/*******************************************
   Author        : Jun Zhang
   Email         : ewalker.zj@gmail.com
   Last Modified : 2017-08-14 11:37
   Filename      : proxy.h
   Description   : 
*******************************************/
#ifndef _PROXY_H
#define _PROXY_H


class Object {
	public:
		Object(){}
		virtual ~Object(){}
		virtual void request() = 0;
};

class realObject : public Object {
	public:
		realObject();
		virtual ~realObject(){}
		virtual void request();
};

class Proxy : public Object {
	public:
		Proxy();
		virtual ~Proxy();
		virtual void request();

	private:
		realObject* pRealObject;
};

#endif // end _PROXY_H
