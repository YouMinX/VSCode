﻿#include<iostream>
using namespace std;

int main()
{
	//三目运算符  语法: (表达式) ? a : b  作用: 表达式成立则返回a，否则b
	//将a和b做比较，将变量大的值赋值给变量c
	int a = 10;
	int b = 20;
	int c = 0;

	c = (a > b ? a : b);
	cout << "c=" << c << endl;

	//在C++中三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b) = 100;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	system("pause");
	return 0;
}