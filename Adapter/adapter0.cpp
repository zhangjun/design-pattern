/****************************************************************
    File Name    : adapter0.cpp
    Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-07 10-29
*****************************************************************/

#include<iostream>
#include "adapter0.h"
using namespace std;

void Adaptee::SpecificRequest(){
    cout << "call SpecificRequest()" << endl;
}

Adapter::Adapter(){
    adaptee = new Adaptee();
}

Adapter::~Adapter(){
    cout << "call Adapter::~Adapter()" << endl;
    delete adaptee;
    adaptee = NULL;
}

void Adapter::Request(){
    adaptee -> SpecificRequest();
}

