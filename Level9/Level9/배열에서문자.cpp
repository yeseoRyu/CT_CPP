#include <iostream>

using namespace std;

char vec[4][3] = {
	'D', 'A', 'D',
	'Q', 'W', 'Q',
	'A', 'S', 'D',
	'A', 'S', 'D'
};

void find(char ch) {
	int y, x, flag;
	flag = 0;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 3; x++) {
			if (vec[y][x] == ch) {
				flag = 1;
				break;
			}
		}
		if (flag == 1) break;
	}
	if (flag == 1) cout << "존재";
	else cout << "없음";
}

int main() {
	char ch;
	cin >> ch;
	find(ch);
	return 0;
}