#include <iostream>
using namespace std;

int arr1[2][5] = {
	0, 0, 1, 0, 0,
	0, 0, 1, 1, 1 };
int arr2[2][5] = {
	3, 5, 4, 1, 1,
	3, 5, 2, 5, 6 };

int isExist(int t) {
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			if (arr1[y][x] == 1 && arr2[y][x] == t)
			{
				return 1;
			}
		}
	}
	return 0;
}

int main() {
	int t;
	cin >> t;
	cout << t;

	if (isExist(t) == 1) cout << " 존재";
	else cout << " 없음";
	return 0;
}