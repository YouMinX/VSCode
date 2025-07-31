#include<iostream>
using namespace std;

int main()
{
	//数组
	/*
		1.数据类型  数组名[数组长度];
		2.数据类型  数组名[数组长度] = { 值1，值2 ... }; 
		3.数组类型  数组名[] = { 值1，值2... };
	*/
	//1.数据类型数组名[数组长度 ];
	int arr[5] ;
	arr[0] = 10;
	arr[1] = 20;
	arr[2] = 30;
	arr[3] = 40;
	arr[4] = 50;

	//访问数组元素
	cout << "arr数组中的元素为:" << endl << arr[0] << endl << arr[1] << endl << arr[2] << endl
		<< arr[3] << endl << arr[4] << endl << arr[5] << endl;

	cout << endl;
	//2.数据类型  数组名[数组长度] = { 值1，值2 ... };
	int arr2[5] = { 10,20,30,40 };
	
	for (int i = 0; i < 5; i++)
	{
		cout << "arr2数组中第" << i << "个元素值为:" << arr2[i] << endl;
	}
	cout << endl;
	//3.数组类型  数组名[] = { 值1，值2... };
	int arr3[] = { 90,80,70,60,50,40,30,20,10 };

	for (int j = 8; j > 3; j--)
	{
		cout << "arr3数组中第" << j << "个元素值为:" << arr3[j] << endl;
	}
	cout << endl;
	//内存空间
	cout << "arr数组占用内存空间为：" << sizeof arr << endl;
	cout << "arr数组中单个元素占用内存空间为：" << sizeof(arr[1]) << endl;
	cout << "arr数组中元素个数为：" << sizeof arr/sizeof(arr[1]) << endl;
	//地址
	cout << endl;
	cout << "arr数组首地址十六进制数为：" << arr << endl;
	cout << "arr数组首地址十进制数为：" << (int)arr << endl;
	cout << "arr数组第一个元素地址为：" << &arr[0] << endl;
	cout << "arr数组第一个元素地址为：" << &arr[1] << endl;

	//数组名是常量，不可以赋值
}