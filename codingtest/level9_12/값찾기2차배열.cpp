#include <iostream>
using namespace std;
int main() {
	char arr[3][5] = {
		'A', 'B', 'C', 'D', 'E',
		'E', 'A', 'B', 'A', 'B',
		'A', 'C', 'D', 'E', 'R'
	};
	int cnt = 0;
	char ch;

	cin >> ch;
	for (int x = 0; x < 3; x++) {
		for (int y = 0; y < 5; y++) {
			if (arr[x][y] == ch) {
				cnt++;
			}
		}
	}
	if (cnt >= 3) {
		cout << "��߰�";
	}
	else if (cnt < 3 && 1 <= cnt) {
		cout << "�߰�";
	}
	else {
		cout << "�̹߰�";
	}
	return 0;
}