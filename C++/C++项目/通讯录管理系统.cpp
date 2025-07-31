//通讯录管理系统
//1、系统需求及功能简介
	//通讯录是一个可以记录亲人、好友信息的工具。
	//本教程主要利用C++来实现一个通讯录管理系统
	//系统中需要实现的功能如下：
		//添加联系人：向通讯录中添加新人，信息包括（姓名、性别、年龄、联系电话、家庭住址）最多记录1000人
			//设计联系人结构体、通讯录结构体并封装添加联系人函数
		//读取联系人：读取通讯录中所有联系人信息
			//封装读取联系人函数、测试
		//删除联系人：按照姓名进行删除指定联系人
			//封装删除联系人函数、测试	
		//查找联系人：按照姓名查看指定联系人信息
		//修改联系人：按照姓名重新修改指定联系人
		//清空联系人：清空通讯录中所有信息
		//退出通讯录：退出当前使用的通讯录
	//2、
#include <iostream>
using namespace std;
#include<string>
#define MAX 1000

//设计联系人结构体
struct Person {
	string m_Name;
	string m_Sex;
	int m_Age;
	long long m_Phone;
	string m_Addr;
};

//设计通讯录结构体
struct Addressbooks {
	//通讯录中保存的联系人数组
	struct Person personArray[MAX];

	//通讯录中当前记录联系人个数
	int m_Size;
}; 

//菜单界面
void showMenu() {
	for (int i = 0; i < 28; i++) {
		cout << "-";
	}
	cout << "\n-----  1、添加联系人  ------"
		<< "\n-----  2、读取联系人  ------"
		<< "\n-----  3、删除联系人  ------"
		<< "\n-----  4、查找联系人  ------"
		<< "\n-----  5、修改联系人  ------"
		<< "\n-----  6、清空联系人  ------"
		<< "\n-----  0、退出通讯录  ------"
		<< endl;
	for (int i = 0; i < 28; i++) {
		cout << "-";
	}
	cout << endl << "请选择操作：";
}

//1、添加联系人
void addPerson(Addressbooks *abs) {
	//判断通讯录是否已满
	if (abs->m_Size == MAX) {
		cout << "通讯录已满，无法添加！" << endl;
		return;		//用于退出函数
	}
	else {
		// 姓名
		string name;
		cout << "正在添加联系人...\n请输入姓名：";
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		// 性别
		string sex;

		cout << "请输入性别：";
		while (cin >> sex) {
			if (sex == "男") {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			if (sex == "女") {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
			cout << "请输入性别：";
		}
		// 年龄
		int age=0;
		while (true) {
			cout << "请输入年龄：";
			cin >> age;
			if (age >= 0 && age <= 120) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		// 电话
		long long phone;
		cout << "请输入电话：";
		while (cin >> phone) {
			if (phone / 10000000000 < 10 && phone / 10000000000 != 0) {
				abs->personArray[abs->m_Size].m_Phone = phone;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
			cout << "请输入电话：";
		}
		// 住址
		cout << "请输入家庭住址：";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//更新通讯录人数
		abs->m_Size++;

		cout << "添加成功" << endl;
	}
}

//2、读取联系人
//封装读取联系人函数
void showPerson(Addressbooks* abs) {
	//判断通讯录中人数是否为0
	if (abs->m_Size == 0) {
		cout << "当前记录为空!" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "姓名：" << abs->personArray[i].m_Name
				<< " \t性别：" << abs->personArray[i].m_Sex
				<< "\t年龄：" << abs->personArray[i].m_Age
				<< " \t电话：" << abs->personArray[i].m_Phone
				<< "\t地址：" << abs->personArray[i].m_Addr
				<< endl;
		}
		cout << "读取完毕" << endl;
	}
}

//封装检测联系人函数
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//查找指定联系人
void findPerson(Addressbooks* abs, int i) {
	cout << "姓名：" << abs->personArray[i].m_Name
		<< " \t性别：" << abs->personArray[i].m_Sex
		<< "\t年龄：" << abs->personArray[i].m_Age
		<< " \t电话：" << abs->personArray[i].m_Phone
		<< "\t地址：" << abs->personArray[i].m_Addr
		<< endl;
}

//封装删除联系人函数
void deletePerson(Addressbooks* abs,int i) {
	cout << "请确定你要删除的联系人：" << endl;
	findPerson(abs, i);
	cout << "\n输入\"是\"或\"否\"" << endl;
	string de_select;
	cin >> de_select;
	if (de_select == "是") {
		for (int j = i; j < abs->m_Size; j++) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		abs->m_Size--;
		cout << "删除成功！" << endl;
	}
	if (de_select == "否") {
		cout << "操作已取消" << endl;
	}
}

//更新指定联系人信息
void modifyPerson(Addressbooks* abs) {
	cout << "请输入你要更新的联系人：";
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		findPerson(abs, ret);
		// 姓名
		string name;
		cout << "正在更新联系人...\n请输入姓名：";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		// 性别
		string sex;
		cout << "请输入性别：";
		while (cin >> sex) {
			if (sex == "男") {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			if (sex == "女") {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
			cout << "请输入性别：";
		}
		// 年龄
		int age = 0;
		while (true) {
			cout << "请输入年龄：";
			cin >> age;
			if (age >= 0 && age <= 120) {
				abs->personArray[ret].m_Age = age;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}
		// 电话
		long long phone;
		cout << "请输入电话：";
		while (cin >> phone) {

			if (phone / 10000000000 < 10 && phone / 10000000000 != 0) {
				abs->personArray[ret].m_Phone = phone;
				break;
			}
			cout << "输入有误，请重新输入" << endl;
			cout << "请输入电话：";
		}
		// 住址
		cout << "请输入家庭住址：";
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "更新成功！" << endl;
	}
	else {
		cout << "查无此人！" << endl;
	}
}

void cleanPerson(Addressbooks* abs) {
	cout << "该操作不可逆！请确认你的操作..." << endl
		<< "\n输入\"是\"或\"否\"" << endl;
	string cl_select;
	cin >> cl_select;
	if (cl_select == "是") {
		abs->m_Size = 0;
		cout << "通讯录已清空" << endl;
		return;
	}
	else {
		cout << "操作已取消";
	}
}

int main() {
	//创建通讯录结构体变量
	Addressbooks abs;
	//初始化通讯录中当前人员个数
	abs.m_Size = 0;

	int select = 0;		//创建用户选择输入的变量

	while (true) {
		//菜单调用
		showMenu();

		cin >> select;	//select;

		switch (select) {
		case 1:		//1、添加联系人
			addPerson(&abs);
			break;
		case 2:		//2、读取联系人
			showPerson(&abs);
			break;
		case 3:	{	//3、删除联系人
			cout << "请输入删除联系人姓名：";
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "查无此人" << endl;
			}
			else {
				int i = isExist(&abs, name);
				deletePerson(&abs,i);
			} 
			break;
		}
		case 4: {		//4、查找联系人
			cout << "请输入你想要查找的联系人：";
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "查无此人" << endl;
			}
			else {
				int i = isExist(&abs, name);
				findPerson(&abs, i);
			}
			break;
		}
		case 5:		//5、修改联系人
			modifyPerson(&abs);
			break;
		case 6:		//6、清空联系人
			cleanPerson(&abs);
			break;
		case 0:		//0、退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		default:
			break;
		}
		system("pause");
		system("cls");
	}
	return 0;
}


//代办---制作无重复姓名通讯录，或制作允许选择
// 姓名相同的多个联系人进行单一删除的操作