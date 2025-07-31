//ͨѶ¼����ϵͳ
//1��ϵͳ���󼰹��ܼ��
	//ͨѶ¼��һ�����Լ�¼���ˡ�������Ϣ�Ĺ��ߡ�
	//���̳���Ҫ����C++��ʵ��һ��ͨѶ¼����ϵͳ
	//ϵͳ����Ҫʵ�ֵĹ������£�
		//�����ϵ�ˣ���ͨѶ¼��������ˣ���Ϣ�������������Ա����䡢��ϵ�绰����ͥסַ������¼1000��
			//�����ϵ�˽ṹ�塢ͨѶ¼�ṹ�岢��װ�����ϵ�˺���
		//��ȡ��ϵ�ˣ���ȡͨѶ¼��������ϵ����Ϣ
			//��װ��ȡ��ϵ�˺���������
		//ɾ����ϵ�ˣ�������������ɾ��ָ����ϵ��
			//��װɾ����ϵ�˺���������	
		//������ϵ�ˣ����������鿴ָ����ϵ����Ϣ
		//�޸���ϵ�ˣ��������������޸�ָ����ϵ��
		//�����ϵ�ˣ����ͨѶ¼��������Ϣ
		//�˳�ͨѶ¼���˳���ǰʹ�õ�ͨѶ¼
	//2��
#include <iostream>
using namespace std;
#include<string>
#define MAX 1000

//�����ϵ�˽ṹ��
struct Person {
	string m_Name;
	string m_Sex;
	int m_Age;
	long long m_Phone;
	string m_Addr;
};

//���ͨѶ¼�ṹ��
struct Addressbooks {
	//ͨѶ¼�б������ϵ������
	struct Person personArray[MAX];

	//ͨѶ¼�е�ǰ��¼��ϵ�˸���
	int m_Size;
}; 

//�˵�����
void showMenu() {
	for (int i = 0; i < 28; i++) {
		cout << "-";
	}
	cout << "\n-----  1�������ϵ��  ------"
		<< "\n-----  2����ȡ��ϵ��  ------"
		<< "\n-----  3��ɾ����ϵ��  ------"
		<< "\n-----  4��������ϵ��  ------"
		<< "\n-----  5���޸���ϵ��  ------"
		<< "\n-----  6�������ϵ��  ------"
		<< "\n-----  0���˳�ͨѶ¼  ------"
		<< endl;
	for (int i = 0; i < 28; i++) {
		cout << "-";
	}
	cout << endl << "��ѡ�������";
}

//1�������ϵ��
void addPerson(Addressbooks *abs) {
	//�ж�ͨѶ¼�Ƿ�����
	if (abs->m_Size == MAX) {
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;		//�����˳�����
	}
	else {
		// ����
		string name;
		cout << "���������ϵ��...\n������������";
		cin >> name;
		abs->personArray[abs->m_Size].m_Name = name;
		// �Ա�
		string sex;

		cout << "�������Ա�";
		while (cin >> sex) {
			if (sex == "��") {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			if (sex == "Ů") {
				abs->personArray[abs->m_Size].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
			cout << "�������Ա�";
		}
		// ����
		int age=0;
		while (true) {
			cout << "���������䣺";
			cin >> age;
			if (age >= 0 && age <= 120) {
				abs->personArray[abs->m_Size].m_Age = age;
				break;
			}
			cout << "������������������" << endl;
		}
		// �绰
		long long phone;
		cout << "������绰��";
		while (cin >> phone) {
			if (phone / 10000000000 < 10 && phone / 10000000000 != 0) {
				abs->personArray[abs->m_Size].m_Phone = phone;
				break;
			}
			cout << "������������������" << endl;
			cout << "������绰��";
		}
		// סַ
		cout << "�������ͥסַ��";
		string address;
		cin >> address;
		abs->personArray[abs->m_Size].m_Addr = address;

		//����ͨѶ¼����
		abs->m_Size++;

		cout << "��ӳɹ�" << endl;
	}
}

//2����ȡ��ϵ��
//��װ��ȡ��ϵ�˺���
void showPerson(Addressbooks* abs) {
	//�ж�ͨѶ¼�������Ƿ�Ϊ0
	if (abs->m_Size == 0) {
		cout << "��ǰ��¼Ϊ��!" << endl;
	}
	else {
		for (int i = 0; i < abs->m_Size; i++) {
			cout << "������" << abs->personArray[i].m_Name
				<< " \t�Ա�" << abs->personArray[i].m_Sex
				<< "\t���䣺" << abs->personArray[i].m_Age
				<< " \t�绰��" << abs->personArray[i].m_Phone
				<< "\t��ַ��" << abs->personArray[i].m_Addr
				<< endl;
		}
		cout << "��ȡ���" << endl;
	}
}

//��װ�����ϵ�˺���
int isExist(Addressbooks* abs, string name) {
	for (int i = 0; i < abs->m_Size; i++) {
		if (abs->personArray[i].m_Name == name) {
			return i;
		}
	}
	return -1;
}

//����ָ����ϵ��
void findPerson(Addressbooks* abs, int i) {
	cout << "������" << abs->personArray[i].m_Name
		<< " \t�Ա�" << abs->personArray[i].m_Sex
		<< "\t���䣺" << abs->personArray[i].m_Age
		<< " \t�绰��" << abs->personArray[i].m_Phone
		<< "\t��ַ��" << abs->personArray[i].m_Addr
		<< endl;
}

//��װɾ����ϵ�˺���
void deletePerson(Addressbooks* abs,int i) {
	cout << "��ȷ����Ҫɾ������ϵ�ˣ�" << endl;
	findPerson(abs, i);
	cout << "\n����\"��\"��\"��\"" << endl;
	string de_select;
	cin >> de_select;
	if (de_select == "��") {
		for (int j = i; j < abs->m_Size; j++) {
			abs->personArray[j] = abs->personArray[j + 1];
		}
		abs->m_Size--;
		cout << "ɾ���ɹ���" << endl;
	}
	if (de_select == "��") {
		cout << "������ȡ��" << endl;
	}
}

//����ָ����ϵ����Ϣ
void modifyPerson(Addressbooks* abs) {
	cout << "��������Ҫ���µ���ϵ�ˣ�";
	string name;
	cin >> name;

	int ret = isExist(abs, name);

	if (ret != -1) {
		findPerson(abs, ret);
		// ����
		string name;
		cout << "���ڸ�����ϵ��...\n������������";
		cin >> name;
		abs->personArray[ret].m_Name = name;
		// �Ա�
		string sex;
		cout << "�������Ա�";
		while (cin >> sex) {
			if (sex == "��") {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			if (sex == "Ů") {
				abs->personArray[ret].m_Sex = sex;
				break;
			}
			cout << "������������������" << endl;
			cout << "�������Ա�";
		}
		// ����
		int age = 0;
		while (true) {
			cout << "���������䣺";
			cin >> age;
			if (age >= 0 && age <= 120) {
				abs->personArray[ret].m_Age = age;
				break;
			}
			cout << "������������������" << endl;
		}
		// �绰
		long long phone;
		cout << "������绰��";
		while (cin >> phone) {

			if (phone / 10000000000 < 10 && phone / 10000000000 != 0) {
				abs->personArray[ret].m_Phone = phone;
				break;
			}
			cout << "������������������" << endl;
			cout << "������绰��";
		}
		// סַ
		cout << "�������ͥסַ��";
		string address;
		cin >> address;
		abs->personArray[ret].m_Addr = address;

		cout << "���³ɹ���" << endl;
	}
	else {
		cout << "���޴��ˣ�" << endl;
	}
}

void cleanPerson(Addressbooks* abs) {
	cout << "�ò��������棡��ȷ����Ĳ���..." << endl
		<< "\n����\"��\"��\"��\"" << endl;
	string cl_select;
	cin >> cl_select;
	if (cl_select == "��") {
		abs->m_Size = 0;
		cout << "ͨѶ¼�����" << endl;
		return;
	}
	else {
		cout << "������ȡ��";
	}
}

int main() {
	//����ͨѶ¼�ṹ�����
	Addressbooks abs;
	//��ʼ��ͨѶ¼�е�ǰ��Ա����
	abs.m_Size = 0;

	int select = 0;		//�����û�ѡ������ı���

	while (true) {
		//�˵�����
		showMenu();

		cin >> select;	//select;

		switch (select) {
		case 1:		//1�������ϵ��
			addPerson(&abs);
			break;
		case 2:		//2����ȡ��ϵ��
			showPerson(&abs);
			break;
		case 3:	{	//3��ɾ����ϵ��
			cout << "������ɾ����ϵ��������";
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "���޴���" << endl;
			}
			else {
				int i = isExist(&abs, name);
				deletePerson(&abs,i);
			} 
			break;
		}
		case 4: {		//4��������ϵ��
			cout << "����������Ҫ���ҵ���ϵ�ˣ�";
			string name;
			cin >> name;
			if (isExist(&abs, name) == -1) {
				cout << "���޴���" << endl;
			}
			else {
				int i = isExist(&abs, name);
				findPerson(&abs, i);
			}
			break;
		}
		case 5:		//5���޸���ϵ��
			modifyPerson(&abs);
			break;
		case 6:		//6�������ϵ��
			cleanPerson(&abs);
			break;
		case 0:		//0���˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
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


//����---�������ظ�����ͨѶ¼������������ѡ��
// ������ͬ�Ķ����ϵ�˽��е�һɾ���Ĳ���