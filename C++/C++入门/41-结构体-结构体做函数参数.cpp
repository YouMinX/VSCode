#include<iostream>
using namespace std;
#include<string>

//结构体做函数参数
//作用：将结构体作为参数向函数中传递
//传递方式有：值传递\\地址传递

struct student {
	string name;
	int age;
	int score;
};
//1、值传递
void printStudent1(struct student s) {
	s.age = 80;
	cout << "子函数1中 \t姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;
}

//2、地址传递
void printStudent2(const student * p) {
	//p->age = 100;		-形参为常量，不允许修改
	cout << "子函数2中 \t姓名：" << p->name << "\t年龄：" << p->age << "\t分数：" << p->score << endl;
}

int main() {
	//结构体做函数参数
	//将学生传入到一个参数中，打印学生身上的所有信息
	//创建结构体变量
	struct student s;
	s.name = "张三";
	s.age = 20;
	s.score = 85;

	printStudent1(s);
	printStudent2(&s);

	cout << "main函数中 \t姓名：" << s.name << "\t年龄：" << s.age << "\t分数：" << s.score << endl;
}