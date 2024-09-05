#include <iostream>
using namespace std;

char arr[2][3] = {
	'F', 'E', 'W',
	'D', 'C', 'A'
};

void findCH(char target) {
	int x, y;
	int cnt = 0;
	for (x = 0; x < 2; x++) {
		for (y = 0; y < 3; y++) {
			if (arr[x][y] == target) {
				cnt++;
			}
		}
	}
	if (cnt > 0) {
		cout << "발견";
	}
	else {
		cout << "미발견";
	}
}

int main() {
	char target;
	cin >> target;
	findCH(target);
	return 0;
}