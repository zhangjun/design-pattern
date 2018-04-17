/****************************************************************
    	File Name    : adapter.cpp
    	Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-07 10-13
*****************************************************************/

#include<iostream>
#include "adapter.h"
using namespace std;

void Adaptee::SpecificRequest(){
    cout << "call SpecificRequest()" << endl;
}

void Adapter::Request(){
    this -> SpecificRequest();
}
