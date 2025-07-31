#include<iostream>
using namespace std;
#include<string>

//1、定义学生结构体
struct student {
	string name;
	int age;
	int score;
};
//2、定义老师结构体
struct teacher {
	int id;
	string name;
	int age;
	struct student stu;
};

int main() {
	//结构体的嵌套
	//1、创建老师
	teacher t;
	t.id = 10000;
	t.name = "老王";
	t.age = 50;
	t.stu.name = "小王";
	t.stu.age = 20;
	t.stu.score = 60;

	cout << "老师姓名：" << t.name << "\t老师编号：" << t.id << "\t老师年龄：" << t.age
		<< "\n学生姓名：" << t.stu.name << "\t学生年龄：" << t.stu.age << "\t学生考试分数：" << t.stu.score
		<< endl;
}