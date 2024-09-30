#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int arr[3][3];
	int dat[10] = { 0 };

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> arr[y][x];
		}
	}

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			dat[arr[y][x]]++;
		}
	}

	for (int i = 0; i < 10; i++)
	{
		if (i > 0 && dat[i] == 0) cout << i << " ";
	}

	return 0;
}