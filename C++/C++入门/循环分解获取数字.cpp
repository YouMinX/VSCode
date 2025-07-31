#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 12345;
    vector<int> digits;  // 存储每一位数字

    while (num > 0) {
        digits.push_back(num % 10);  // 获取个位
        num /= 10;                  // 去掉个位
    }

    // 反转顺序（因为是从个位开始取的）
    reverse(digits.begin(), digits.end());

    // 输出每一位
    for (int d : digits) {
        cout << d << " ";
    }
    // 输出：1 2 3 4 5

    return 0;
}