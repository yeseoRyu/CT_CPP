#include <iostream>
#include <cstring>
using namespace std;

int image[4][4];

int rectSum(int dy, int dx) {
	int sum = 0;
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			sum += image[dy + y][dx + x];
		}
	}
	return sum;
}

int main() {
	int y, x;
	int max, maxY, maxX;

	for (y = 0; y < 4; y++)
	{
		for (x = 0; x < 4; x++)
		{
			cin >> image[y][x];
		}
	}

	max = 0;
	for (y = 0; y < 3; y++)
	{
		for (x = 0; x < 2; x++)
		{
			int rect = rectSum(y, x);
			if (max < rect)
			{
				max = rect;
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << "(" << maxY << "," << maxX << ")";
	return 0;
}