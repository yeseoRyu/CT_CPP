#include <iostream>
using namespace std;

void CountLine(char t[10]) {
	for (int i = 0; i < 10; i++) {
		if (t[i] == '\0') {
			cout << i << "=" << t << endl;
			break;
		}
	}
}

int main() {
	char arr[3][10];
	int i;

	for (i = 0; i < 3; i++) {
		cin >> arr[i];
	}


	for (i = 0; i < 3; i++) {
		CountLine(arr[i]);
	}

	return 0;
}