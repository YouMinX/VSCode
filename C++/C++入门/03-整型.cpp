#include<iostream>
using namespace std;

int main()
{
	short a1 = 125;
	short a2 = 32768;
	cout << "short字符型所占用的空间为" << sizeof(a1) << endl;
	cout << a1 << endl << a2 << endl;

	int b1 = 644879;
	int b2 = 2147483648;
	cout << "int字符型所占用的空间为" << sizeof(b1) << endl;
	cout << b1 << endl << b2 << endl;

	long c1 = 644879;
	long c2 = 2147483648;
	cout << "long字符型所占用的空间为" << sizeof(c1) << endl;
	cout << c1 << endl << c2 << endl;

	long long d1 = 7987984984189;
	long long d2 = 9223372036854775808;
	cout << "long long字符型所占用的空间为" << sizeof(d1) << endl;
	cout << d1 << endl << d2 << endl;

	system("pause");
	return 0;
}