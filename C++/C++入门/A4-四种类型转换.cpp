#include <iostream>
//using namespace std;

int main()
{
	/*	static_cast<void*>() 静态转换
		static_cast 是一种更安全的转换方式，它在编译时检查转换的合法性。
		它通常用于基类和派生类指针之间的转换，或者具有相关类型转换操作符的类。
		一、可以用于基本类型的转换
		二、不能用于基本类型指针间的转换（需要强制类型转换）
		三、可以用于有继承关系类对象之间的转换和类指针之间的转换

		reinterpret_cast<void*>() 重新解释转换(强转)
		用于任意指针（或引用）类型之间的转换，但不检查安全性。
		它只是告诉编译器把指针从一种类型重新解释为另一种类型。很有可能会造成运行时的错误！

		const_cast<void*>() 常量转换
		const_cast 是C++中用来移除变量的 const 性质的类型转换操作符。

		dynamic_cast<void*>() 动态转换
		dynamic_cast 是 C++中的一个类型转换操作符，它主要用于处理
		多态类型的安全向下转换（也就是父类向子类转换）。 如果转换
		不合法，对于指针类型，dynamic_cast 会返回空指针 nullptr ； 
		对于引用类型，它会抛出 std::bda_cast 异常
	*/



	//system("pause");
	return 0;
}