#include<iostream>
using namespace std;

//time系统时间头文件包含
#include <ctime>

int main()
{
	int num0 = 0;
	while (num0 < 10)
	{
		cout << num0 << endl;
		num0++;
	}
	cout << "over" << endl;

	//while循环结构案例-猜数字

	//添加随机数种子  作用：利用当前系统时间生成随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));

	cout << "现有一个范围在1~100的随机整数，你只5次机会" 
		<< endl<< "======猜数字游戏开始！======" << endl;
	int num = rand() % 100 + 1;      //rand()%100 生成 0~99
	int n = 0;
	int rest_time = 5;
	while (n != num)
	{
		cout << "剩余次数:" << rest_time << endl;
		cout << "请输入你的猜测值(1~100):";
		cin >> n;
		if (n > num)
		{
			cout << "大了" << endl;
			rest_time--;
		}
		else if (n < num)
		{
			cout << "小了" << endl;
			rest_time--;
		}
		else
		{
			cout << "你猜对了！" << endl;
		}
		if (rest_time == 0)
		{
			cout << "You failed!" << endl << "The number is " << num << endl;
			break;
		}
	}

	system("pause");
	return 0;
}