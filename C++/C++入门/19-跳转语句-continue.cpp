#include<iostream>
using namespace std;

int main()
{
	//continue语句:跳过本次循环中尚未执行的语句，直接执行下一次循环

	for (int i = 0; i < 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;
		}
		cout << i << endl;
	}
}