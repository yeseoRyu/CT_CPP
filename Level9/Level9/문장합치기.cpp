#include <iostream>
using namespace std;

int main() {
	char arr[2][6];
	char t[12];
	int y, x, len1, len2, len3, i, cnt;

	for (x = 0; x < 2; x++) {
		cin >> arr[x];
	}

	len1 = 0;
	for (x = 0; x < 6; x++) {
		if (arr[0][x] == '\0') {
			len1 = x;
			break;
		}
	}
	len2 = 0;
	for (x = 0; x < 6; x++) {
		if (arr[1][x] == '\0') {
			len2 = x;
			break;
		}
	}

	cnt = 0;
	for (i = 0; i < len1; i++) {
		t[cnt] = arr[0][i];
		cnt++;
	}
	for (i = 0; i < len2; i++) {
		t[cnt] = arr[1][i];
		cnt++;
	}

	for (i = 0; i < cnt; i++) {
		cout << t[i];
	}

	return 0;
}