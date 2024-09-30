#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int arr[3][5] = {
		1,3,3,5,1,
		3,6,2,4,2,
		1,9,2,6,5
	};
	int dat[10] = { 0 };
	int t;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 5; x++)
		{
			dat[arr[y][x]]++;
		}
	}

	cin >> t;

	for (int i = 0; i < 10; i++)
	{
		if (dat[i] == t) cout << i << " ";
	}

	return 0;
}