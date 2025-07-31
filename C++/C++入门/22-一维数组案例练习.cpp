#include<iostream>
using namespace std;

int main()
{
	//1.五只小猪称体重
	int arr1[5] = { 300,350,200,400,250 };
	int max = 0;
	for (int i = 0; i < 5; i++) {
		if (arr1[i] > max) {
			max = arr1[i];
		}
	}
	cout << "最大小猪的体重为" << max << endl;

	//2.元素逆置
	int arr2[5] = { 4,2,3,5,1 };
	int end = sizeof(arr2) / sizeof(arr2[0]) - 1;  //数组末尾元素下标

	cout << "数组逆置前:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << ",";
	}

	for (int start = 0; start < 5; start++)
	{
		if (start < end)
		{
			int temp = arr2[start];
			arr2[start] = arr2[end];
			arr2[end] = temp;
		}
		end--;
	}
	cout << endl << "数组逆置后:";
	for (int i = 0; i < 5; i++)
	{
		cout << arr2[i] << ",";
	}
	
	//3.冒泡排序
	int arr3[9] = { 4,2,8,0,5,7,1,3,9 };

	cout << endl << "数组排序前:";
	for (int k = 0; k < 9; k++)
	{
		cout << arr3[k] << ",";
	}
	
	for (int x = 0; x < 8; x++)
	{
		for (int y = 0; y < 8 - x; y++)
		{
			if (arr3[y] > arr3[y + 1])
			{
				int temp = arr3[y];
				arr3[y] = arr3[y + 1];
				arr3[y + 1] = temp;
			}
		}
	}

	cout << endl << "数组排序后:";
	for (int l = 0; l < 9; l++)
	{
		cout << arr3[l] << ",";
	}
}
