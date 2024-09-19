#include <iostream>
using namespace std;


int main() {
	int vec[7] = { 3, 5, 1, 1, 2, 3, 2 };
	int arr[4];
	int i, y, x, cnt;

	for (i = 0; i < 4; i++) {
		cin >> arr[i];
	}

	for (y = 0; y < 4; y++) {
		cnt = 0;
		for (x = 0; x < 7; x++) {
			if (arr[y] == vec[x]) { cnt++; }
		}
		cout << arr[y] << "=" << cnt << "°³\n";
	}

	return 0;
}