#include<iostream>
using namespace std;

int main()
{
	//二维数组名称用途
	//1.查看占用内存空间大小
	int arr[2][3] =
	{
		{1,2,3},
		{4,5,6}
	};
	cout << "二维数组占用内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行元素占用内存空间为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用内存空间为：" << sizeof(arr[0][0]) << endl;
	cout << "二维数组元素个数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组行数为：" << sizeof(arr)/sizeof(arr[0]) << endl;
	cout << "二维数组列数为：" << sizeof(arr[0])/sizeof(arr[0][0]) << endl;

	//2.查看二维数组的首地址
	cout << "二维数组首地址为:" << (int)arr << endl;
	cout << "二维数组第一行首地址为:" << (int)arr[0] << endl;
	cout << "二维数组第二行首地址为:" << (int)arr[1] << endl;
	cout << "二维数组第一个元素首地址为:" << (int)&arr[0][0] << endl;

	//案例练习-考试成绩统计
	int arr1[3][3] = { 100,100,100,90,50,100,60,70,80 };
	string names[3] = { "张三","李四","王五" };
	for (int i = 0; i < 3; i++)
	{
		int temp = 0;
		for (int j = 0; j < 3; j++)
		{
			temp += arr1[i][j];
		}
		cout << names[i] << "的总成绩为：" << temp << endl;
	}
}