#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[11];
	cin >> arr;

	int len = strlen(arr);
	for (int y = len - 1; y >= 0; y--) {
		for (int x = y; x <= len - 1; x++) {
			cout << arr[x];
		}
		cout << endl;
	}

	return 0;
}