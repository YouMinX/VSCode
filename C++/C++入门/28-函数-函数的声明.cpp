#include<iostream>
using namespace std;

//函数的声明:告诉编译器函数名称以及如何调用函数。函数的实际主体可以单独定义

//比较函数，实现两个整型数字进行比较，返回较大的值
//可以声明多次，但只能定义一次

//函数的声明
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);
int max(int a, int b);

//函数的调用
int main()
{
	int a = 10;
	int b = 20; 

	cout << max(a, b) << endl;
}

//函数的定义
int max(int a, int b)
{
	return a > b ? a : b;
}