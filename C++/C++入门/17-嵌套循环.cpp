#include<iostream>
using namespace std;

int main()
{
	//利用嵌套循环实现矩形星图
	for (int i = 0; i < 10; i++)
	{
		for (int j = 0; j < 10; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}

	//案例练习:乘法口诀表
	for (int a = 1; a <= 9; a++)
	{
		for (int b = 1; b <= a; b++)
		{
			cout << b << "×" << a << "=" << a * b << "\t";
		}
		cout << endl;
	}

}