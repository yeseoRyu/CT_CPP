#include <iostream>
using namespace std;

int map[3][3] = { 3, 1, 9, 7, 2, 1, 1, 0, 8 };

int isExist(int arr[3][3]) {

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (arr[y][x] == 1 && map[y][x] >= 3 && map[y][x] <= 5)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int arr[3][3];

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	if (isExist(arr) == 1) cout << "발견";
	else cout << "미발견";

	return 0;
}