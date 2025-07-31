#include<iostream>
using namespace std;

int main()
{
	//for循环语法：
	for (int a = 0; a < 10; a++)
	{
		cout << a << endl;
	}

	//练习案例：敲桌子
	//案例描述：从开始数到数字100，如果数字个位或十位含有7，或是该数字是7的倍数，
	// 我们打印敲桌子，其余数字直接打印输出
	for (int i = 1; i <= 100; i++)
	{
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7)
		{
			cout << "敲桌子" << endl;
		}
		else
		{
			cout << i << endl;
		}
	}

}