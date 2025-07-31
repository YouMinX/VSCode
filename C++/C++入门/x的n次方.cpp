#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstdio>
using namespace std;
int main() {
    /*如何正确表示“乘以10的4次方”？
方法 1：直接写全数字
int year_sec = 31560000;  // 清晰无歧义

方法 2：使用科学计数法（需浮点数转整型）
int year_sec = 3156 * 1e4;  // 1e4是科学计数法（结果为31560000.0，再隐式转int）

方法 3：显式计算幂（需数学库）
#include <math.h>
int year_sec = 3156 * (int)pow(10, 4);  // 强制转换为int
*/
    int age = 0;
    cin >> age;
    int year_sec = 3156 * 1e4;
    printf("%d", age * year_sec);
}