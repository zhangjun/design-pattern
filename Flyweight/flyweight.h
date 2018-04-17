/****************************************************************
    	File Name    : flyweight.h
    	Author       : Jun Zhang
	Mail         : ewalker.zj@gmail.com 
   	Created Time : 2018-01-10 10-36
*****************************************************************/

#ifndef __FLYWEIGHT_H
#define __FLYWEIGHT_H

#include<string>
#include<map>

//http://blog.csdn.net/houpei8404/article/details/7556457

class Flyweight {
    public:
        Flyweight(string strState): m_strState(strState){}
        virtual ~Flyweight(){}
        virtual void Operation(const std::string &otherState) = 0;
        std::string getState();
    protected:
        std::strimg m_strState;
};

class ConcreteFlyweight: public Flyweight {
    public:
        ConcreteFlyweight(string strState): Flyweight(strState){}
        virtual ~ConcreteFlyweight(){}
        virtual void Operation(const std::string &otherState);
};

class FlyweightFactory {
    public:
        FlyweightFactory(){}
        virtual ~FlyweightFactory();
        Flyweight* GetFlyweight(const std::string &key);
    protected:
        std::map<string, Flyweight*> m_FlyweightMgr;
};

#endif

