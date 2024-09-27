#include <iostream>
using namespace std;

int main() {
	char arr[3][5] = { "ATKB", "CZFD", "HGEI" };
	char t;
	int ty, tx, dy, dx;

	cin >> t >> ty >> tx;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			if (arr[y][x] == t)
			{
				dy = y;
				dx = x;
				break;
			}
		}
	}

	cout << arr[dy + ty][dx + tx];

	return 0;
}