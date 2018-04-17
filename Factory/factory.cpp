/*******************************************
   Author        : Jun Zhang
   Email         : ewalker.zj@gmail.com
   Last Modified : 2017-08-14 11:05
   Filename      : factory.cpp
   Description   : 
*******************************************/
#include<iostream>

#include "factory.h"

using std::cin;
using std::cout;
using std::endl;

Operation* Factory::create(char cOperator){
	Operation* op;
	switch(cOperator){
		case '+':
			op = new Add();
			break;
		case '-':
			op = new Sub();
		default:
			op = new Add();
	}
	return op;
}

int main(){
	int a, b;
	cin >> a >> b;

	Operation* op = Factory::create('+');

	op -> m = a;
	op -> n = b;

	cout << op -> getResult() << endl;
	return 0;
}
