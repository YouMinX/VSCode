#include<iostream>

using namespace std;

int main()
{
	/*	枚举enumeration
			如果一个变量只有几种可能的值，可以定义为枚举(enumeration)类型。
			所谓"枚举"是指将变量的值一一列举出来，变量的值只能在列举出来的值的范围内。

		标准格式
			enum 枚举名 { 标识符[=整型常数] , 标识符[=整型常数] , 
						... 标识符[=整型常数] } (枚举变量);
			如：enum color{red, green, blue} mycolor;
				mycolor = color::red; 
			或：	enum color{red, green, blue};
				color mycolor = color::red;

		为标识符赋值
			你还可以为标识符赋值，且可以重复指定同一个值。
			未被初始化的标识符的值默认第一个为0，第二个为1，以此类推
			未被初始化的标识符的值默认比前一位大一，以下的blue的值应为6
			如：enum color{red, green = 5, blue};

		指定枚举类型
				C++11中，还可以指定给枚举类型赋值的整数类型，在enum的名字后面
			加上冒号以及指定的类型，限定作用域枚举默认为32位整形，在某些情况下
			，甚至没必要用到32位，为了节省内存开销，有时应当选用更小的枚举类型
				需要注意的是，不能指定为float或者double等类型，因为枚举量必须
			是一个整数，float和double都不是整数。
			如：enum colar:unsi

        将枚举值转换为其底层类型
			int redValue = static_cast<int>(color::red);

		将底层类型转换回枚举值
			color anotherColor = static_cast<color>(1); // 假设 color::green 的值为 1
	*/

	//代码实现
	enum Color { Red, Yellow, Green, Black }myColor;
	myColor = Color::Red;
	int redValue = static_cast<int>(Color::Red);
	cout << redValue << endl;
	
	enum Color backColor, frontColor, innerColor;
	backColor = Color::Red;
	frontColor = Color::Green;
	innerColor = Color::Black;

	cout << backColor << "--" << frontColor << "--" << innerColor << endl;



	//system("pause");
	return 0;
}