#include <iostream>
using namespace std;

char a[50], b[50], c[50];

int length(char a[50]) {
	int i, len;
	for (i = 0; i < 50; i++) {
		if (a[i] == '\0') {
			return i;
		}
	}
}

int main() {
	cin >> a >> b >> c;
	int len[3];

	len[0] = length(a);
	len[1] = length(b);
	len[2] = length(c);

	int maxlen = 0;
	for (int i = 0; i < 3; i++) {
		if (len[i] > maxlen) maxlen = len[i];
	}

	for (int i = 0; i < 3; i++) {
		if (maxlen == len[0]) { cout << a; break; }
		if (maxlen == len[1]) { cout << b; break; }
		if (maxlen == len[2]) { cout << c; break; }
	}

	return 0;
}