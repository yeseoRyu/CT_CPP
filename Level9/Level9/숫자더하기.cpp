#include <iostream>
using namespace std;

int main() {
	int vec[5][5] = {
		4, 5, 4, 5, 4,
		8, 9, 8, 9, 8,
		1, 2, 1, 2, 1,
		4, 5, 4, 5, 4,
		6, 7, 6, 7, 6
	};

	int y, x;
	for (int i = 0; i < 5; i++) {
		cin >> y >> x;
		vec[y][x] += 1;
		if (vec[y][x] >= 10) vec[y][x] = 0;
	}

	// Ãâ·Â
	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			cout << vec[y][x];
		}
		cout << endl;
	}
	return 0;
}