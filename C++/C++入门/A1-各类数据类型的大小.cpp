#include<iostream>  
#include <limits>
#include <climits>

using namespace std;

int main()
{
    cout << "type: \t\t" << "************size**************" << endl;
    cout << "bool: \t\t" << "所占字节数：" << sizeof(bool);
    cout << "\t最大值：" << (numeric_limits<bool>::max)();
    cout << "\t\t\t最小值：" << (numeric_limits<bool>::min)() << endl;

    char maxChar = static_cast<char>(CHAR_MAX);
    char minChar = static_cast<char>(CHAR_MIN);
    cout << "char: \t\t" << "所占字节数：" << sizeof(char);
    cout << "\t最大值："     << static_cast<int>(maxChar);
    cout << "\t\t\t最小值：" << static_cast<int>(minChar) << endl;

    char maxSignedChar = static_cast<char>(CHAR_MAX);
    char minSignedChar = static_cast<char>(CHAR_MIN);
    cout << "signed char: \t" << "所占字节数：" << sizeof(signed char);
    cout << "\t最大值："     << static_cast<int>(maxSignedChar);
    cout << "\t\t\t最小值：" << static_cast<int>(minSignedChar) << endl;

    char maxUnsignedChar = static_cast<char>(CHAR_MAX);
    char minUnsignedChar = static_cast<char>(CHAR_MIN);
    cout << "unsigned char: \t" << "所占字节数：" << sizeof(unsigned char);
    cout << "\t最大值："     << static_cast<int>(maxUnsignedChar);
    cout << "\t\t\t最小值：" << static_cast<int>(minUnsignedChar) << endl;

    cout << "wchar_t: \t" << "所占字节数：" << sizeof(wchar_t);
    cout << "\t最大值：" << (numeric_limits<wchar_t>::max)();
    cout << "\t\t\t最小值：" << (numeric_limits<wchar_t>::min)() << endl;

    cout << "short: \t\t" << "所占字节数：" << sizeof(short);
    cout << "\t最大值：" << (numeric_limits<short>::max)();
    cout << "\t\t\t最小值：" << (numeric_limits<short>::min)() << endl;

    cout << "int: \t\t" << "所占字节数：" << sizeof(int);
    cout << "\t最大值：" << (numeric_limits<int>::max)();
    cout << "\t\t最小值：" << (numeric_limits<int>::min)() << endl;

    cout << "unsigned: \t" << "所占字节数：" << sizeof(unsigned);
    cout << "\t最大值：" << (numeric_limits<unsigned>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned>::min)() << endl;

    cout << "long: \t\t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long>::min)() << endl;
    cout << "unsigned long: \t" << "所占字节数：" << sizeof(unsigned long);
    cout << "\t最大值：" << (numeric_limits<unsigned long>::max)();
    cout << "\t\t最小值：" << (numeric_limits<unsigned long>::min)() << endl;

    cout << "long long: \t" << "所占字节数：" << sizeof(long);
    cout << "\t最大值：" << (numeric_limits<long long>::max)();
    cout << "\t最小值：" << (numeric_limits<long long>::min)() << endl;

    cout << "float: \t\t" << "所占字节数：" << sizeof(float);
    cout << "\t最大值：" << (numeric_limits<float>::max)();
    cout << "\t\t最小值：" << (numeric_limits<float>::min)() << endl;

    cout << "double: \t" << "所占字节数：" << sizeof(double);
    cout << "\t最大值：" << (numeric_limits<double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<double>::min)() << endl;
    cout << "long double: \t" << "所占字节数：" << sizeof(long double);
    cout << "\t最大值：" << (numeric_limits<long double>::max)();
    cout << "\t\t最小值：" << (numeric_limits<long double>::min)() << endl;

    cout << "size_t: \t" << "所占字节数：" << sizeof(size_t);
    cout << "\t最大值：" << (numeric_limits<size_t>::max)();
    cout << "\t最小值：" << (numeric_limits<size_t>::min)() << endl;

    cout << "string: \t" << "所占字节数：" << sizeof(string) << endl;
    // 无最大最小值
    // cout << "\t最大值：" << (numeric_limits<string>::max)();
    // cout << "\t\t最小值：" << (numeric_limits<string>::min)() << endl;  
    cout << "type: \t\t" << "************size**************" << endl;
    return 0;
}