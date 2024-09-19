#include <iostream>
using namespace std;


int main() {
	int arr[3][3];
	int y, x;
	int sum;

	for (y = 0; y < 3; y++) {
		for (x = 0; x < 3; x++) {
			cin >> arr[y][x];
		}
	}

	sum = 0;
	for (y = 0; y < 3; y++) {
		for (x = 0; x <= y; x++) {
			sum += arr[y][x];
		}
	}

	cout << sum;

	return 0;
}