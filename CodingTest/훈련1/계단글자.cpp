#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[11];
	cin >> arr;
	int len = strlen(arr);

	for (int y = 0; y < len; y++) {
		for (int x = 0; x <= y; x++) {
			cout << arr[x];
		}
		cout << endl;
	}
	return 0;
}