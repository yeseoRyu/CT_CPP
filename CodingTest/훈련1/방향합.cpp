#include <iostream>
#include <cstring>
using namespace std;

int MAP[5][5] = {
	{3, 3, 5, 3, 1},
	{2, 2, 4, 2, 6},
	{4, 9, 2, 3, 4},
	{1, 1, 1, 1, 1},
	{3, 3, 5, 9, 2}
};

int direct[4][2] = { 1, 1, 1, -1, -1, 1, -1, -1 };

int sum(int dy, int dx) {
	// 대각선의 합을 출력
	int sum = 0;

	for (int i = 0; i < 4; i++)
	{
		int y = dy + direct[i][0];
		int x = dx + direct[i][1];
		if (y < 0 || y >= 5 || x < 0 || x >= 5) continue;
		sum += MAP[y][x];
	}
	return sum;
}

int main() {
	// 1) 이중배열로 함수에 값 보내기
	int max = 0;
	int maxY, maxX;
	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (max < sum(y, x))
			{
				max = sum(y, x);
				maxY = y;
				maxX = x;
			}
		}
	}

	cout << maxY << " " << maxX;
	return 0;
}