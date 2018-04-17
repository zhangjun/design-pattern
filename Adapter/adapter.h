/****************************************************************
    	File Name    : adapter.h
    	Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-07 10-06
*****************************************************************/

#ifndef __ADAPTER_H
#define __ADAPTER_H

// class adapter
class Target {
    public:
        virtual void Request(){}
};

class Adaptee {
    public:
        void SpecificRequest();
};

class Adapter : public Adaptee, public Target
{
    public:
        void Request();
};


#endif // end __ADAPTER_H

