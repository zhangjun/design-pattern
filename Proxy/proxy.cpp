/*******************************************
   Author        : Jun Zhang
   Email         : ewalker.zj@gmail.com
   Last Modified : 2017-08-14 11:44
   Filename      : proxy.cpp
   Description   : 
*******************************************/
#include <iostream>
#include "proxy.h"

using std::cout;
using std::endl;

realObject::realObject(){
	cout << "construct realObject" << endl;
}

void realObject::request(){
	cout << "request by realObject" << endl;
}

Proxy::Proxy() : 
	pRealObject(NULL) 
{
	cout << "construct Proxy" << endl;
}

Proxy::~Proxy() {
	cout << "delete Proxy" << endl;
	delete pRealObject;
	pRealObject = NULL;
}

void Proxy::request() {
	if( pRealObject == NULL){
		cout << "resqust by Proxy" << endl;
		pRealObject = new realObject();
	}

	pRealObject -> request();
}

int main(){
	Object *p = new Proxy();
	p -> request();

	delete p;

	return 0;
}



