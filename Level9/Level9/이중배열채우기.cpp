#include <iostream>
using namespace std;

int main() {
	int vect[3][3] = { 0 };
	int t, y, x;

	cin >> t;
	for (y = 0; y < 3; y++) {
		for (x = 2 - y; x < 3; x++) {
			vect[y][x] = t++;
		}
	}

	for (y = 0; y < 3; y++) {
		for (x = 0; x < 3; x++) {
			cout << vect[y][x];
		}
		cout << endl;
	}
	return 0;
}