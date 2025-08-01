﻿#include<iostream>
using namespace std;

int main()
{
	/*二维数组定义的四种方式：
	1. 数据类型 数组名[ 行数 ][ 列数 ];
	2. 数据类型 数组名[ 行数 ][ 列数 ] = {{数据1，数据2}，{数据3，数据4}}；
	3. 数据类型 数组名[ 行数 ][ 列数 ] = {数据1, 数据2, 数据3, 数据4};
	4. 数据类型 数组名[      ][ 列数 ] = {数据1，数据2，数据3，数据4}；
	|*建议：以上4种定义方式,利用第二种更加直观,提高代码的可读性*/
	
	//1. 数据类型 数组名[行数][列数];
	int arr[2][3];
	arr[0][0] = 1;
	arr[0][1] = 2;
	arr[0][2] = 3;
	arr[1][0] = 4;
	arr[1][1] = 5;
	arr[1][2] = 6;
	cout << "简单输出二维数组：" << endl << arr[0][0] << "," << arr[0][1] << "," << arr[0][2] << endl
		<< arr[1][0] << "," << arr[1][1] << "," << arr[1][2] << endl;

	//嵌套循环输出二维数组。外层打印行数，内层打印列数
	cout << "嵌套循环输出效果：" << endl;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr[i][j] << ",";
		}
		cout << endl;
	}

	//2. 数据类型 数组名[行数][列数] = { {数据1，数据2}，{数据3，数据4} }；
	int arr2[2][3] =
	{
		{11,22,33},
		{44,55,66}
	};
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << ",";
		}
		cout << endl;
	}

	//3. 数据类型 数组名[行数][列数] = { 数据1, 数据2, 数据3, 数据4 };
	int arr3[2][3] = { 111,222,333,444,555,666 };

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << ",";
		}
		cout << endl;
	}

	//4. 数据类型 数组名[][列数] = { 数据1，数据2，数据3，数据4 }；
	int arr4 [][3] = { 1111,2222,3333,4444,5555,6666 };
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << ",";
		}
		cout << endl;
	}
}