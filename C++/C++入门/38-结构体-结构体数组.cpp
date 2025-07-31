#include<iostream>
using namespace std;
#include<string>

//1、定义结构体
struct Student {
	string name;
	int age;
	int score;
};

int main() {
	//结构体数组
	//作用:将自定义的结构体放入到数组中便于维护
	//语法:struct 结构体名 数组名[元素个数] = { {}, {}, ...{} }
	
	//2、创建结构体数组
	struct Student stuArray[3] = {
		{"张三",18,100},
		{"李四",22,99 },
		{"王五",20,74 }
	};
	//3、给结构体数组中的元素赋值
	stuArray[2].name = "赵六";
	stuArray[2].age = 50;
	stuArray[2].score = 64;

	//4、遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << " 姓名：" << stuArray[i].name
			<< "\t年龄：" << stuArray[i].age
			<< "\t分数：" << stuArray[i].score << endl;
	}
}