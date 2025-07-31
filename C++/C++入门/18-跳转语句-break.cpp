#include<iostream>
using namespace std;

int main()
{
	//跳转语句-break:用于跳出选择结构或循环结构，一般使用于：
	//1.出现在switch条件语句中，作用是终止case并跳出switch
	cout << "请选择副本难度" << endl;
	cout << "1、<普通>" << endl;
	cout << "2、<中等>" << endl;
	cout << "3、<困难>" << endl;
	cout << "4、跳过" << endl;

	int select = 0; //创建选择结果的变量
	cin >> select;

	switch (select)
	{
	case 1:
		cout << "您选择了<普通>" << endl;
		break;
	case 2:
		cout << "您选择了<中等>" << endl;
		break;
	case 3:
		cout << "您选择了<困难>" << endl;
		break;
	case 4:
		cout << "执行跳过" << endl;
	default:
		break;
	}

	//2.出现在循环语句中，作用是跳出当前的循环语句
	int skip = 0;
	cout << "输入12345执行打印输出，否则跳过" << endl;
	cin >> skip;
	if (skip == 12345)
	{
		for (int i = 0; i < 10; i++)
		{
			if (i == 5)
			{
				break;
			}
			cout << i << endl;
		}
	}
	else
	{
		cout << "执行跳过" << endl;
	}
	
	//3.出现在嵌套循环中，跳出最近的内层循环语句
	for (int j = 0; j < 10; j++)
	{
		for (int k = 0; k < 10; k++)
		{
			if (k == 5)
			{
				break;
			}
			cout << "* ";
		}
		cout << endl;
	}
}