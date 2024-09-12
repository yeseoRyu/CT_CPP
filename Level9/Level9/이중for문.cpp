#include <iostream>

using namespace std;

int main() {
	int vec[3][3] = { 0 };
	int y, x, t;
	char ch;

	cin >> ch;

	t = 1;
	if (ch >= '0' && ch <= '9') {
		for (y = 2; y >= 0; y--) {
			for (x = 2; x >= y; x--) {
				vec[y][x] = t;
				t++;
			}
		}
	}
	else if (isupper(ch))
	{
		for (y = 2; y >= 0; y--) {
			for (x = 0; x <= y; x++) {
				vec[y][x] = t;
				t++;
			}
		}
	}

	// Ãâ·Â
	for (y = 0; y < 3; y++) {
		for (x = 0; x < 3; x++) {
			if (vec[y][x] == 0) cout << " ";
			else cout << vec[y][x];
		}
		cout << endl;
	}

	return 0;
}