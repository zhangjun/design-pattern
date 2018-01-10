/****************************************************************
    File Name    : adapter0.h
    Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-07 10-25
*****************************************************************/

#ifndef __ADAPTER0_H
#define __ADAPTER0_H

class Target {
    public:
        Target() {}
        ~Target() {}
        virtual void Request(){}
};

class Adaptee {
    public:
        void SpecificRequest();
};

class Adapter : public Target {
    private:
        Adaptee *adaptee;

    public:
        Adapter();
        ~Adapter();
        void Request();
};

#endif // end __ADAPTER0_H

