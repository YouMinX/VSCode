#include <cstdio>
#include<iostream>
#include<utility>
#include<string.h>

int main() {
	//数字
	int arr[] = { 5,8,9,2,4,7 };
	int len = sizeof(arr) / sizeof(arr[0]);
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < len - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int tmp = arr[j + 1];
				arr[j + 1] = arr[j];
				arr[j] = tmp;
			}
		}
	}
	for (int i = 0; i < len; i++) {
		printf("%d ", arr[i]);
	}
	std::cout << std::endl;

	//字符
	char arr1[] = { 'a','b','c','d','e','f','g','\0'};
	int len1 = sizeof(arr1) / sizeof(arr1[0]);
	for (int i = 0; i < len1 - 1; ++i) {          // 外层循环只需len-1次
		for (int j = 0; j < len1 - i - 1; ++j) {   // 内层循环每次减少1
			if (1) {
				// 使用标准库的swap函数更安全高效
				std::swap(arr1[j], arr1[j + 1]);
			}
		}
	}
	for (int i = 0; i < len1; i++) {
		printf("%c ", arr1[i]);
	}
	char s2[3] = { 'A','B','C' }; // 没有 \0
	//printf("%s", s2); // 危险！会一直读取内存直到遇到随机 \0，导致缓冲区溢出或乱码

	//字符串
	char arr2[] = "abcdefg";//[a b c d e f \0]
	//int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	//int right = sz-2;
	int right = strlen(arr2) - 1;
	while (left < right) {
		char tmp1 = arr2[left];
		arr2[left] = arr2[right];
		arr2[right] = tmp1;
		left++;
		right--;
	}
	printf("\n%s\n", arr2);
	return 0;
}