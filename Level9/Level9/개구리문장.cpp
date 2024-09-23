#include <iostream>
using namespace std;

int main() {
	char t[11];
	int i, len, flag;
	cin >> t;

	len = 0;
	for (i = 0; i < 11; i++) {
		if (t[i] == '\0') {
			len = i;
			break;
		}
	}

	flag = 0;
	for (i = 0; i < len; i++) {
		if (i % 2 == 0) {
			if (isupper(t[i]) == 0) {

				flag = 1;
				break;
			}
		}
		else if (i % 2 != 0) {
			if (islower(t[i]) == 0) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 0) cout << "개구리문장";
	else cout << "일반문장";
	return 0;
}