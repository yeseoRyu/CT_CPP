#include <iostream>
#include <cstring>
using namespace std;

void input(int t[4][4]) {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			cin >> t[y][x];
		}
	}
}

int main() {
	int a[4][4], b[4][4];
	int flag = 0;
	input(a);
	input(b);

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 4; x++) {
			if (a[y][x] == 1 && b[y][x] == 1) {
				flag = 1;
				break;
			}
		}
	}

	if (flag == 1) cout << "걸리다";
	else cout << "걸리지않는다";
	return 0;
}