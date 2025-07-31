#include<iostream>
using namespace std;

int main()
{
	//do...while循环语句：先执行循环语句，再判断循环条件
	/*
	语法：
	do
	{
	循环语句
	}while(循环条件);
	*/
	int num1 = 0;
	
	do
	{
		cout << num1 << endl;
		num1++;
	} while (num1 < 10);
	 

	//利用do...while循环语句实现查找水仙花数

	int num = 100;

	do
	{
		int a = 0; //个位
		int b = 0; //十位
		int c = 0; //百位 

		a = num % 10;
		b = num / 10 % 10;
		c = num / 100;
		if (a* a* a + b * b * b + c * c * c == num)
		{
			cout << num << endl;
		}

		num++;
	} while (num < 1000);

	return 0;
}