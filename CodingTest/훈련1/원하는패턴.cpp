#include <iostream>
#include <cstring>
using namespace std;

int map[4][5] = {
	3, 5, 4, 2, 5,
	3, 3, 3, 2, 1,
	3, 2, 6, 7, 8,
	9, 1, 1, 3, 2
};
int dy, dx;

int sum(int yy, int xx) {
	int result = 0;
	for (int y = 0; y < dy; y++) {
		for (int x = 0; x < dx; x++) {
			result += map[yy + y][xx + x];
		}
	}
	return result;
}

int main() {
	int max, rec, maxY, maxX;
	cin >> dy >> dx;

	max = 0;
	maxY = 0;
	maxX = 0;
	for (int y = 0; y <= 4 - dy; y++) {
		for (int x = 0; x <= 5 - dx; x++) {
			rec = sum(y, x);

			if (max < rec) {
				max = rec;
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << "(" << maxY << "," << maxX << ")";

	return 0;
}