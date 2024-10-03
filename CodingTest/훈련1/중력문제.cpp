#include <iostream>
#include <cstring>
using namespace std;

char map[4][4];

void swap(int y, int x) {
	char temp = map[y][x];
	map[y][x] = map[y + 1][x];
	map[y + 1][x] = temp;
}

void search(char map[4][4]) {
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			if (map[y][x] != '_' && map[y + 1][x] == '_') {
				swap(y, x);
			}
		}
	}
}

int main() {
	for (int y = 0; y < 4; y++) {
		cin >> map[y];
	}

	search(map);

	// ∞À≈‰
	search(map);
	for (int y = 0; y < 4; y++) {
		for (int x = 0; x < 3; x++) {
			cout << map[y][x];
		}
		cout << endl;
	}
	return 0;
}