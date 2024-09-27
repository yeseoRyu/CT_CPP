#include <iostream>
using namespace std;

int arr[6] = { 3, 7, 4, 1, 2, 6 };

int isExist(int t) {
	int i = 0;
	for (int i = 0; i < 6; i++)
	{
		if (arr[i] == t) return 1;
	}
	return 0;
}

int main() {
	int uni[2][2];

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			cin >> uni[y][x];
		}
	}

	for (int y = 0; y < 2; y++)
	{
		for (int x = 0; x < 2; x++)
		{
			if (isExist(uni[y][x]) == 1) cout << "OK ";
			else cout << "NO ";
		}
		cout << endl;
	}

	return 0;
}