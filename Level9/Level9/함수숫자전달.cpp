#include <iostream>
using namespace std;

void BBQ(int num) {
	int cnt;
	cnt = 1;
	for (int i = 0; i < num; i++) {
		cout << cnt++;
	}
}

void KFC(char ch) {
	for (int i = 0; i < 7; i++) {
		cout << ch;
	}
}

int main() {
	int input;
	int num;
	char ch;

	cin >> input;
	if (input % 2 == 0) {
		cin >> ch;
		KFC(ch);
	}
	else {
		cin >> num;
		BBQ(num);
	}
	return 0;
}