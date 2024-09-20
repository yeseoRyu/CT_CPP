#include <iostream>
using namespace std;

int getLen(char t[7]) {
	for (int i = 0; i < 7; i++) {
		if (t[i] == '\0') return i;
	}
	return 0;
}

int main() {
	char vec[4][7];
	int len[4];
	int i, temp;;

	for (i = 0; i < 4; i++) {
		cin >> vec[i];
	}

	for (i = 0; i < 4; i++) {
		len[i] = getLen(vec[i]);
	}

	for (i = 0; i < 4; i++) {
		for (int x = i + 1; x < 4; x++) {
			if (len[i] > len[x]) {
				temp = len[i];
				len[i] = len[x];
				len[x] = temp;
			}
		}
	}

	for (i = 0; i < 4; i++) {
		cout << len[i] << " ";
	}

	return 0;
}