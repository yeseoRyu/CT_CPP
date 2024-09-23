#include <iostream>
using namespace std;


int getLen(char sen[11]) {
	for (int i = 0; i < 10; i++) {
		if (sen[i] == '\0') return i;
	}
	return 0;
}

int main() {
	char arr[5][11];
	int len[5];
	int i, index;

	for (i = 0; i < 5; i++) {
		cin >> arr[i];


	}

	for (i = 0; i < 5; i++) {
		len[i] = getLen(arr[i]);
	}

	index = 0;

	for (i = 0; i < 4; i++) {
		if (len[i] < len[i + 1]) index = i + 1;
	}
	cout << arr[index];

	return 0;
}