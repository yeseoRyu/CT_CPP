#include <iostream>
using namespace std;

int main() {
	int vect[4][4] = {
		1, 3, 6, 2,
		4, 2, 4, 5,
		6, 3, 7, 3,
		1, 5, 4, 6
	};
	int select[16];
	int t, y, x, cnt;

	cin >> t;
	cnt = 0;
	int temp;
	for (y = 0; y < 4; y++) {
		for (x = 0; x < 4; x++) {
			if (vect[y][x] > t) {
				temp = vect[y][x];
				select[cnt] = temp;
				cnt++;
			}
		}
	}

	//Ãâ·Â
	for (int i = 0; i < cnt; i++) {
		cout << select[i] << " ";

	}
	return 0;
}