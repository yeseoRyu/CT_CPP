#include <iostream>
using namespace std;

int main() {
	char a[6], b[6];
	int al, bl, i, x, temp;

	cin >> a >> b;

	al = 0;
	for (i = 0; i < 6; i++) {
		if (a[i] == '\0') break;
		al++;
	}

	bl = 0;
	for (i = 0; i < 6; i++) {
		if (b[i] == '\0') break;
		bl++;
	}

	for (i = 0; i < al; i++) {
		for (x = i + 1; x < al; x++) {
			if (a[i] > a[x]) {
				temp = a[i];
				a[i] = a[x];
				a[x] = temp;
			}
		}
	}
	for (i = 0; i < bl; i++) {
		for (x = i + 1; x < bl; x++) {
			if (b[i] > b[x]) {
				temp = b[i];
				b[i] = b[x];
				b[x] = temp;
			}
		}
	}


	for (i = 0; i < al; i++) {
		cout << a[i];
	}
	for (i = 0; i < bl; i++) {
		cout << b[i];
	}

	return 0;
}