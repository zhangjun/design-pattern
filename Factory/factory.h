/*******************************************
   Author        : Jun Zhang
   Email         : zhangjun9@staff.weibo.com
   Last Modified : 2017-08-14 10:57
   Filename      : factory.h
   Description   : 
*******************************************/
#ifndef _FACTORY_H
#define _FACTORY_H


class Operation{
	public:
		int m;
		int n;
		virtual double getResult(){
			double result = 0.0;
			return result;
		}
};

class Add : public Operation {
	public:
	virtual double getResult(){
		return m + n;
	}
};

class Sub : public Operation {
	public:
	virtual double getResult(){
		return m - n;
	}
};

class Factory {
	public:
		static Operation* create(char cOperator);
};

#endif // end _FACTORY_H
