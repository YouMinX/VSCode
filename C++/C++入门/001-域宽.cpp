#include<iostream>
using namespace std;

int main(){
	//域宽作用：填充对齐%md，m为域宽值
	int a = 0xABCDEF;
	printf("%15d\n", a);//右对齐
	printf("%-15d\n", a);//左对齐
	printf("%015d\n", a);//零对齐

}