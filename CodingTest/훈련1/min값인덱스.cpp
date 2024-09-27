#include <iostream>
using namespace std;

int map[2][3] = { 3, 55, 42, -5, -9, -10 };

int isExist(int t) {
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (map[y][x] == t) return 1;
		}
	}
	return 0;
}

int main() {
	int arr[6];
	int min, index;

	min = 9;
	for (int i = 0; i < 6; i++)
	{
		cin >> arr[i];
		if (i % 2 == 0)
		{
			if (min > arr[i])
			{
				min = arr[i];
				index = i;
			}
		}
	}

	cout << "arr[" << index << "]=" << min;

	return 0;
}