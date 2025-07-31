#include<iostream>
using namespace std;

//函数的声明
void swap(int a, int b)
{
	int temp = a;
	a = b;
	b = temp;
	cout << "swap a = " << a << endl;
	cout << "swap b = " << b << endl;
}