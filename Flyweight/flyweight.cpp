/****************************************************************
    File Name    : flyweight.cpp
    Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-10 11-02
*****************************************************************/
#include<string>
#include<map>"
#include "flyweight.h"


Flyweight* FlyweightFactory::getFlyweight(const std::string &key){
    Flyweight *instance = NULL;
    std::map<std::string, Flyweight*>::iterator it;
    it = m_FlyweightMgr.find(key);
    if(it == m_FlyweightMgr.end()){
        instance = new ConcreteFlyweight(key);
        m_FlyweightMgr[key] =  instance;
        return instance;
    }

    return it -> second;
}

FlyweightFactory::~FlyweightFactory(){
    Flyweight *instance = NULL;
    std::map<std::string, Flyweight*>::iterator it;
    for(it = m_FlyweightMgr.begin(); it != m_FlyweightMgr.end(); it ++){
        instance = it -> second;
        delete instance;
        instance = NULL;
        m_FlyweightMgr.erase(it ++);
    }
}

