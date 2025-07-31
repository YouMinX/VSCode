#include <iostream>
#include <ios>

int main() {
    int hexValue = 0x1A; // 十六进制数值
    int octValue = 012;  // 八进制数值
    int decValue = 26;   // 十进制数值

    // 设置输出格式
    std::cout.setf(std::ios::showbase | std::ios::uppercase);

    // 输出不同进制的数值
    std::cout << "Hexadecimal: " << hexValue << std::endl;
    std::cout << "Octal: " << octValue << std::endl;
    std::cout << "Decimal: " << decValue << std::endl;

    return 0;
}