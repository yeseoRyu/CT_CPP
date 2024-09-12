#include <iostream>

using namespace std;

int main() {
	char vec[5][5] = { 0 };
	int t, i;
	char a;

	cin >> t >> a;

	for (i = 4; i >= 0; i--) {
		vec[t - 1][i] = a;
		a++;
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (vec[y][x] == 0) cout << '0';
			else cout << vec[y][x];
		}
		cout << endl;
	}

	return 0;
}