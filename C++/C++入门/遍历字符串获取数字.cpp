#include <iostream>
#include <string>
using namespace std;

int main() {
    int num = 12345;
    string s = to_string(num);  // 转为字符串 "12345"

    // 遍历字符串获取每一位
    for (char c : s) {
        // 利用ASCII码表将char隐性转换为int
        // 例如char“5”=53，而char“0”=48
        int digit = c - '0';   
        cout << digit << " ";
    }
    // 输出：1 2 3 4 5

    return 0;
}