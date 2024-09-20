#include <iostream>
using namespace std;

int getLen(char t[7]) {
	int len = 0;

	for (int i = 0; i < 7; i++) {
		if (t[i] == '\0') {
			len = i;
			break;
		}
	}

	return len;
}

int main() {
	char a[7];
	char b[7];
	cin >> a >> b;

	int al, bl, flag;
	al = getLen(a);
	bl = getLen(b);

	flag = 0;

	if (al != bl) { flag = 1; }
	else if (al == bl) {
		for (int i = 0; i < al; i++) {
			if (a[i] != b[i]) {
				flag = 1;
				break;
			}
		}
	}
	else flag = 1;

	if (flag == 1) cout << "다름";
	else cout << "같음";

	return 0;
}