#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int a[4];
	int b[4];
	int dat[10] = { 0 };
	int result[8];

	for (int i = 0; i < 4; i++) {
		cin >> a[i];
		dat[a[i]]++;

	}
	for (int i = 0; i < 4; i++) {
		cin >> b[i];
		dat[b[i]]++;
	}


	int t = 0;
	for (int i = 0; i < 10; i++) {
		if (dat[i] > 0) {
			for (int a = 0; a < dat[i]; a++) {
				result[t++] = i;
			}
		}
	}

	for (int i = 0; i < 8; i++) cout << result[i] << " ";

	return 0;
}