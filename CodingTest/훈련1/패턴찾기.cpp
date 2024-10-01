#include <iostream>
#include <cstring>
using namespace std;

char map[3][5] = { "ABGK", "TTAB", "ACCD" };
char pattern[2][3];

int isPattern(int dy, int dx) {
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (map[dy + y][dx + x] != pattern[y][x]) return 0;
		}
	}
	return 1;
}

int main() {
	int result = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> pattern[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			result += isPattern(y, x);
		}
	}

	if (result > 0) cout << "발견(" << result << "개)";
	else cout << "미발견";

	return 0;
}