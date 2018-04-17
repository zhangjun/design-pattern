/****************************************************************
    	File Name    : main.cpp
    	Author       : Jun Zhang
	Mail         : zhangjun9@staff.weibo.com 
	Created Time : 2018-01-07 10-17
*****************************************************************/

#include<iostream>
//include "adapter.h"
#include "adapter0.h"
using namespace std;

int main(){
    Target *t = new Adapter();
    t -> Request();
    return 0;
}

