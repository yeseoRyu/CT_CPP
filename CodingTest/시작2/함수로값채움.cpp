#include <iostream>
using namespace std;

void magic(int vec[3][3]) {
	int n = 1;
	for (int y = 0; y < 3; y++) {
		for (int x = y; x < 3; x++) {
			vec[y][x] = n++;
		}
	}
}

void output(int vec[3][3]) {
	for (int y = 0; y < 3; y++) {
		for (int x = 0; x < 3; x++) {
			if (vec[y][x] == 0) cout << " ";
			else cout << vec[y][x];
		}
		cout << endl;
	}
}

int main() {
	int vec[3][3] = { 0 };
	magic(vec);
	output(vec);

	return 0;
}