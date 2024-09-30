#include <iostream>
#include <cstring>
using namespace std;

int isPattern(int fam[3]) {
	int cnt = 0;
	int lv = 1;

	return 0;
}

int main() {
	int up[5];
	int down[5];
	int cnt = 0;

	for (int i = 0; i < 5; i++) cin >> up[i];
	for (int i = 0; i < 5; i++) cin >> down[i];

	for (int i = 0; i < 5; i++) {
		if (up[i] == 1 && down[i] == 1) cnt++;
	}

	cout << cnt << "°³";
	return 0;
}