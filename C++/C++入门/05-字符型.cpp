#include<iostream>
using namespace std;

int main()
{
	/*字符本质是整数：C / C++ 中，char 类型实际存储的是
	ASCII 码值（0~127 的整数），因此可以直接参与算术运算。*/
	char ch1 = 'a';
	char ch2 = 'A';
	cout << ch1 << endl << ch2 << endl;

	cout << (int)ch1 << endl << (int)ch2 << endl;

	system("pause");
	return 0;
}
