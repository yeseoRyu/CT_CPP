#include <iostream>

using namespace std;

int main() {
	int vec[5][5] = { 0 };
	int t, y, x;
	cin >> t;

	for (y = 0; y < 5; y++) {
		if (y == 0 || y == 4) {
			for (x = 0; x < 5; x++) {
				vec[y][x] = t;
			}
		}
		else {
			vec[y][0] = t;
			vec[y][4] = t;
		}
	}

	// Ãâ·Â
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			if (vec[y][x] == 0) cout << "_";
			else cout << vec[y][x];
		}
		cout << endl;
	}
	return 0;
}