#include "swap.h"

void swap1(int* p1, int* p2)
{
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main()
{
	//指针和函数
	//1、值传递		-值传递不修饰/不改变实参
	int a = 10;
	int b = 20;
	cout << "值传递: " << endl;
	swap(a, b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	//2、地址传递		-地址传递修饰/改变实参
	swap1(&a, &b);
	cout << "地址传递: " << endl << "a = " << a << endl;
	cout << "b = " << b << endl;
}