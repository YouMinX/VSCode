#include<iostream>
using namespace std;

int main()
{
	//一般情况下仅表示6位有效数字
	float a1 = 3.14f;
	float a2 = 32768.2f;
	cout << "short字符型所占用的空间为" << sizeof(a1) << endl;
	cout << a1 << endl << a2 << endl;

	double b1 = 644879;
	double b2 = 2147483648;
	cout << "double字符型所占用的空间为" << sizeof(b1) << endl;
	cout << b1 << endl << b2 << endl;
	
	system("pause");
	return 0;
}