#include<iostream>
using namespace std;
#include "randomTime.h"

int main() {
	RTstatement();
	for (int i = 0; i < 10; i++) {
		int a = randomTime(40, 100,10);//
		cout << a << ",";
	}
}


