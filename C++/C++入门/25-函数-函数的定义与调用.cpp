#include<iostream>
using namespace std;

//定义一个函数
int add(int num1, int num2)
{
	//num1和num2为形式参数，简称形参
	int sum = num1 + num2;
	return sum;
}

//调用函数
int main()
{
	//main函数中调用add函数
	//a和b为实际参数，简称实参
	int a = 10;
	int b = 20;
	int c = add(a, b);
	cout << "c = " << c << endl;

	a = 500;
	b = 600;
	c = add(a, b);
	cout << "c = " << c << endl;


	//函数的作用：将一段经常使用的代码封装起来，减少重复代码
	//一个较大的程序, 一般分为若干个程序块, 每个模块实现特定的功能。

	/*函数的定义一般主要有5个步骤:
	1、返回值类型			int
	2、函数名				add
	3、参数列表				(int num1,int num2)
	4、函数体语句			int sum=num1+num2;
	5、 return 表达式		return sum;
	*/

	/*语法：
	返回值类型 函数名 （参数列表）		int add(int num1,int num2)
	{									{
		函数体语句						int sum = num1+num2;
		return表达式					retun sum;
	}									}
	*/

}