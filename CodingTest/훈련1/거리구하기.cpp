#include <iostream>
using namespace std;

int main() {
	int arr[8] = { 5, 9, 4, 6, 1, 5, 8, 9 };
	int index, t, offset;
	cin >> index >> t;
	offset = 0;

	for (int i = index; i < 8; i++) {
		if (arr[i] == t) break;
		offset++;
	}

	cout << offset;

	return 0;
}