#include <iostream>
using namespace std;

int main() {
	char arr[3][3] = { 0 };
	char t;
	int y, x;

	cin >> t;

	y = 2;
	while (y >= 0) {
		x = 0;
		while (x <= 2 - y) {
			arr[y][x] = t++;
			x++;
		}
		y--;
	}


	// Ãâ·Â
	y = 0;
	while (y < 3) {
		x = 0;
		while (x < 3) {
			if (arr[y][x] == '\0') cout << " ";
			else cout << arr[y][x];
			x++;
		}
		cout << endl;
		y++;
	}


	return 0;
}