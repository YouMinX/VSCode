#include<iostream>
using namespace std;

int main()
{
	//算术运算符-(加减乘除)取模	----即取余数
	int x = 345;
	cout << x % 10 << endl;		//5
	cout << x % 100 << endl;	//45

	//算术运算符-递增递减运算符	----每次加一或减一
	//前置递增
	int a = 10;
	++a;
	cout << "a=" << a << endl;	//11

	//后置递增
	int b = 10;
	b++;
	cout << "b=" << b << endl;	//11

	//前置与后置的区别
	/*
	前置递增：先让变量+1，再进行运算
	后置递增：先进行运算，再让变量+1
	*/
	int c = 10;
	int d = ++c * 10;
	cout << "c=" << c << endl;	//11
	cout << "d=" << d << endl;	//110

	int e = 10;
	int f = e++ * 10;
	cout << "e=" << e << endl;	//11
	cout << "f=" << f << endl;	//100

	//逻辑运算符
	int g = 10;
	cout << !g << endl << !!g << endl;	//0-1
	int h = 0;
	cout << !h << endl;					//1
	cout << (g && !h) << (g && h) << (!g && h) << endl;	//1-0-0
	cout << (g || !h) << (g || h) << (!g || h) << endl;	//1-1-0
	
	system("pause");
	return 0;
}