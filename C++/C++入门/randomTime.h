#include<iostream>
using namespace std;
#include<ctime>

void RTstatement() {
	srand((unsigned int)time(NULL));
}

int randomTime(int a, int b, int c) {
	int random = rand() % (b - a + 1) + (a); //范围从a到b
	return random;
}
