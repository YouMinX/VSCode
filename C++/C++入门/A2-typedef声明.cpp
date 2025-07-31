#include<iostream>
using namespace std;

int main()
{
	// typedef 可以为已有的数据类型起一个新的名字
	// 格式：typedef type newname;
	typedef int feet;
	feet distance = 100;	//用feet类型定义了一个整型变量
	cout << distance << endl;

	return 0;
}