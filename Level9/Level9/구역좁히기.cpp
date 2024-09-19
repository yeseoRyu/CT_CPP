#include <iostream>
using namespace std;


int main() {
	char arr[5];
	int y, x;

	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	for (y = 0; y < 5; y++) {
		for (x = y; x < 5; x++) {
			cout << arr[x] << " ";
		}
		cout << endl;
	}

	return 0;
}