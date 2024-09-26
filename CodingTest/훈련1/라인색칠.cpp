#include <iostream>
using namespace std;

int main() {
	int arr[7][4];
	int y, x, t;
	int a, b, c;

	t = 1;
	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 4; x++)
		{
			arr[y][x] = t++;
		}
	}

	cin >> a >> b >> c;
	for (x = 0; x < 4; x++)
	{
		arr[a][x] = 0;
		arr[b][x] = 0;
		arr[c][x] = 0;
	}

	for (y = 0; y < 7; y++)
	{
		for (x = 0; x < 4; x++)
		{
			cout << arr[y][x] << " ";
		}
		cout << endl;
	}
	return 0;
}