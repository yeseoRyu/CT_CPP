#include <iostream>
#include <cstring>
using namespace std;

char model[5][4] = {
	"___", "___", "ATK", "___", "___"
};
char dir[4][6] = { "UP", "DOWN", "RIGHT", "LEFT" };
int direct[4][2] = { -1,0, 1,0, 0,1, 0,-1 };


void swap(int y, int x, int m) {
	int temp = model[y][x];
	int dy = y + direct[m][0];
	int dx = x + direct[m][1];
	if (dy < 0 || dy >= 5 || dx < 0 || dx >= 3) return;
	model[y][x] = model[dy][dx];
	model[dy][dx] = temp;

}

int move(int y, int x, char d[6]) {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 6; x++) {
			if (dir[y][x] == '\0') break;
			if (dir[y][x] == d[x]) {
				return y;
			}
		}
	}
}

int main() {
	char m, d[6];
	int flag;

	for (int i = 0; i < 7; i++) {
		cin >> m >> d;
		flag = 0;

		for (int y = 0; y < 5; y++) {
			for (int x = 0; x < 3; x++) {
				if (model[y][x] == m) {
					int m = move(y, x, d);
					swap(y, x, m);
					flag = 1;
					break;
				}
			}
			if (flag == 1) break;
		}
	}

	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 3; x++) {
			cout << model[y][x];
		}
		cout << endl;
	}

	return 0;
}