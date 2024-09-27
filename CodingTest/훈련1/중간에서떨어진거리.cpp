#include <iostream>
using namespace std;

int main() {
	char arr[5][5];
	char a = 'A';
	char t;
	int y, x, dy, dx;

	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			arr[y][x] = a++;
		}
	}

	cin >> t;
	for (y = 0; y < 5; y++)
	{
		for (x = 0; x < 5; x++)
		{
			if (arr[y][x] == t)
			{
				dy = y;
				dx = x;
			}
		}
	}

	cout << (dy - 2) << "," << (dx - 2);

	return 0;
}