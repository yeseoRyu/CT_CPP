#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char t;
	cin >> t;
	int dat[100] = { 0 };
	dat[t]++;

	int index;
	for (int i = 0; i < 100; i++) {
		if (dat[i] == 1) {
			int d = 1;
			index = i - 3;
			if (index < 65) index = 91 - (65 - index);
			break;
		}
	}

	for (int i = 0; i < 7; i++) {
		cout << (char)index++;
		if (index == 91) index = 65;
	}



	return 0;
}