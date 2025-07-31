#include<iostream>
using namespace std;

int main()
{
	int score = 0;
	cout << "请给电影打分(0~5分):";
	cin >> score;

	cout << "您的评分为：" << score << endl;
	switch (score)//缺点：不能够处理区间，只能处理离散值  优点：结构清晰，执行效率高
	{
	case 5:
		cout << "您认为电影很完美" << endl;
		break;
	case 4:
		cout << "您认为电影非常好" << endl;
		break;
	case 3:
		cout << "您认为电影还可以" << endl;
		break;
	case 2:
		cout << "您认为电影一般" << endl;
		break;
	default:
		cout << "您认为电影不行" << endl;
	}
	system("pause");
	return 0;
}