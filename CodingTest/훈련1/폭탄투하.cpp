#include <iostream>
#include <cstring>
using namespace std;

char map[4][5];
int direct[8][2] = { -1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1 };

void expolde(int y, int x) {
	for (int i = 0; i < 8; i++)
	{
		int dy = y + direct[i][0];
		int dx = x + direct[i][1];
		if (dy < 0 || dy >= 4 || dx < 0 || dx >= 5) continue;
		map[dy][dx] = '#';
	}
}

int main() {
	int y, x;
	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 5; x++)
		{
			map[y][x] = '_';
		}
	}
	int y1, x1, y2, x2;

	cin >> y1 >> x1;
	expolde(y1, x1);
	cin >> y2 >> x2;
	expolde(y2, x2);

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 5; x++)
		{
			cout << map[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}