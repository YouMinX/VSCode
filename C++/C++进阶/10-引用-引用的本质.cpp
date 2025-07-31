/*全局区：
全局变量和静态变量存放在此.
全局区还包含了常量区， 字符串常量和其他常量也存放在此.
该区域的数据在程序结束后由操作系统释放.*/

#include<iostream>
using namespace std;

//全局变量
int gl_a = 10;
int gl_b = 10;

//const修饰的全局变量
const int c_gl_a = 10;

int main() {
	//全局区

	//全局变量、静态变量、常量

	//创建普通局部变量
	int a = 10;
	int b = 10;

	cout << "局部变量a的地址为：" << (int)&a << endl;
	cout << "局部变量b的地址为：" << (int)&b << endl;

	cout << "全局变量a的地址为：" << (int)&gl_a << endl;
	cout << "全局变量b的地址为：" << (int)&gl_b << endl;

	//静态变量: 变量一直保存到程序结束
	static int st_a = 10;
	static int st_b = 10;

	cout << "静态变量a的地址为：" << (int)&st_a << endl;
	cout << "静态变量b的地址为：" << (int)&st_b << endl;

	//常量
	//字符串常量
	cout << "字符串常量的地址为：" << (int)&"hello world" << endl;

	//const修饰的变量 
	//const修饰的全局变量/const修饰的局部变量
	cout << "全局常量 c_gl_a的地址为：" << (int)&c_gl_a << endl;

	int c_lo_a = 10;

	cout << "局部常量 c_lo_a的地址为：" << (int)&c_lo_a << endl;

	return 0;
}
/*
总结
局部变量、const修饰的局部变量（局部常量）	在非全局区中
而全局变量、静态变量、字符串常量、全局常量	在全局区中
*/