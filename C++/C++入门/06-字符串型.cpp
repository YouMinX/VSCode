#include<iostream>
using namespace std;

int main()
{
	char a[] = "456546";
	cout << a << endl;
	char b[] = "2149802146456546";
	cout << b << endl;

	string c = "124563";
	cout << c << endl;


	cout << "字符串a所占空间" << sizeof a << endl;
	cout << "字符串b所占空间" << sizeof b << endl;
	cout << "字符串c所占空间" << sizeof c << endl;

}

