#include <iostream>
using namespace std;

int getLen(char t[9]) {
	for (int i = 0; i < 8; i++) {
		if (t[i] == '\0') return i;
	}
	return 0;
}

int main() {
	char arr[2][9];
	int cnt, y, x, len;

	cin >> arr[0] >> arr[1];
	cnt = 0;

	// 길이 먼저 구하기
	if (getLen(arr[0]) > getLen(arr[1])) len = getLen(arr[0]);
	else len = getLen(arr[1]);


	for (x = 0; x < len; x++) {
		if (arr[0][x] != '\0' || arr[1][x] != '\0') {
			if (arr[0][x] != arr[1][x]) cnt++;
		}
		else break;
	}

	cout << cnt;
	return 0;
}