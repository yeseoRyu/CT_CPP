#include <iostream>
#include <cstring>
using namespace std;

int vect[5][4];

int direct[8][2] = { -1, -1, -1, 0, -1, 1, 0,
	-1, 0, 1, 1, -1, 1, 0, 1, 1 };

int rect(int y, int x) {
	for (int i = 0; i < 8; i++)
	{
		int dy = y + direct[i][0];
		int dx = x + direct[i][1];
		if (dy < 0 || dy >= 5 || dx < 0 || dx >= 4) continue;
		if (vect[dy][dx] != 0) return 1;
	}
	return 0;
}

int main() {
	int result;
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cin >> vect[y][x];
			if (vect[y][x] == 1) result = rect(y, x);
		}
		if (result == 1)break;
	}

	if (result == 0) cout << "안정된 상태";
	else cout << "불안정한 상태";
	return 0;
}