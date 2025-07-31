#include<iostream>
using namespace std;

int main()
{
	//goto语句:无条件跳转语句,直接跳到标记
	//Tips:在程序中尽量不使用goto语句，以免造成程序流程混乱
	
	cout << "1、xxxx" << endl;

	cout << "2、xxxx" << endl;
	goto FLAG;
	cout << "3、xxxx" << endl;
	
	cout << "4、xxxx" << endl;
	FLAG:
	cout << "5、xxxx" << endl;
}