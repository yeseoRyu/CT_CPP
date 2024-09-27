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
	int pix[2][2];
	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> pix[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (isExist(pix[y][x]) == 1) cout << "Y ";
			else cout << "N ";
		}
		cout << endl;
	}

	return 0;
}