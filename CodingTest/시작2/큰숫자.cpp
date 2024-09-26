#include <iostream>
using namespace std;

int main() {
	int arr[6] = { 10, 50, 40, 20, 30, 40 };
	int vec[6] = { 0 };
	int i, x, cnt;

	for (i = 0; i < 6; i++) {
		cin >> vec[i];
	}

	for (i = 0; i < 6; i++) {
		cnt = 0;
		for (x = 0; x < 6; x++) {
			if (vec[i] < arr[x]) cnt++;
		}
		cout << vec[i] << "=" << cnt << "°³\n";
	}

	return 0;
}