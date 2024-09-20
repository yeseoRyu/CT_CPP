#include <iostream>
using namespace std;

int main() {
	char a[11], b[11];
	cin >> a >> b;
	int t, flag, len;

	len = 0;

	for (int i = 0; i < 11; i++) {
		if (a[i] == '\0') {
			len = i;
			break;
		}
	}

	t = 0;

	for (int i = len - 1; i >= 0; i--) {
		if (b[i] == a[t++]) {
			flag = 0;
		}
		else {
			flag = 1;
			break;
		}
	}

	if (flag == 1) cout << "거울문장아님";
	else cout << "거울문장";

	return 0;
}