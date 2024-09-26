#include <iostream>
using namespace std;

int main() {
	int vec[6];
	int i, x, temp;
	for (i = 0; i < 6; i++) {
		cin >> vec[i];
	}

	for (x = 0; x < 6; x++) {
		for (i = x + 1; i < 6; i++) {
			if (vec[x] < vec[i]) {
				temp = vec[x];
				vec[x] = vec[i];
				vec[i] = temp;
			}
		}
	}

	for (i = 0; i < 6; i++) {
		cout << vec[i];
	}
	return 0;
}