#include<iostream>
using namespace std;

int main()
{
	int a = 0;
	cout << "请输入您本月的开销:";
	cin >> a;
	//单if语句
	if (a >= 1500)//注意！if语句后面不能带分号
	{
		cout << "0" << endl;
	}
	//if...else语句
	if (a >= 1500)//注意！if语句后面不能带分号
	{
		cout << "1" << endl;
	}
	else
	{
		cout << "2" << endl;
	}
	//if...else if... else语句
	if (a >= 1500)//注意！if语句后面不能带分号
	{
		cout << "3" << endl;
	}
	else if (a >= 1000)
	{
		cout << "4" << endl;
	}
	else
	{
		cout << "5" << endl;
	}

	system("pause");
	return 0;
}