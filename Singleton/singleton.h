/****************************************************************
    File Name    : singleton.h
    Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-10 10-07
*****************************************************************/

#ifndef __SINGLETON_H
#define __SINGLETON_H

class Singleton {
    public:
        static Singleton *Instance(){
            if(m_instance == NULL){
                m_instance = new Singleton();
            }
            return m_instance;
        }

    private:
        Singleton(){}

    private:
        static Singleton *m_instance;
};

Singleton* Singleton::m_instance = NULL;

#endif