#include <iostream>
using namespace std;


int main() {
	int map[5][4] = { 0 };
	int y, x, sum;

	for (y = 0; y < 5; y++) {
		for (x = 0; x < 4; x++) {
			cin >> map[y][x];
		}
	}


	for (y = 0; y < 5; y++) {
		sum = 0;
		for (x = 0; x < 4; x++) {
			sum += map[y][x];
		}
		cout << sum << " ";
	}


	return 0;
}