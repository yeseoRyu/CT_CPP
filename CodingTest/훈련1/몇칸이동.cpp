#include <iostream>
#include <cstring>
using namespace std;

char map[4][4];

int main() {
	int a, b;
	int dy, dx, ty, tx;
	for (int i = 0; i < 4; i++) cin >> map[i];

	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] == 'A') {
				dy = y;
				dx = x;
			}
			if (map[y][x] == 'B') {
				ty = y;
				tx = x;
			}
		}
	}
	int d = 1;
	if (dy < ty) a = ty - dy;
	else a = dy - ty;
	if (dx < tx) b = tx - dx;
	else b = dx - tx;

	cout << a + b;
	return 0;
}