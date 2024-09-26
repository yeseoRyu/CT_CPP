#include <iostream>
using namespace std;

int main() {
	int vec[5][5];
	int n, y, x;

	cin >> n;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 5; x++) {
			cin >> vec[y][x];
		}
	}

	if (n == 1) {
		for (y = 0; y < 5; y++) {
			for (x = 0; x <= y; x++) {
				cout << vec[y][x] << " ";
			}
			cout << endl;
		}
	}
	else {
		for (y = 0; y < 5; y++) {
			for (x = 0; x < 5 - y; x++) {
				cout << vec[y][x] << " ";
			}
			cout << endl;
		}
	}

	return 0;
}