#include <iostream>
#include <cstring>
using namespace std;

int arr[3][4] = {
	65000, 35, 42, 70,
	70, 35, 65000, 1300,
	65000, 30000, 38, 42
};
int dat[65001] = { 0 };

int main() {

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			dat[arr[y][x]]++;
		}
	}

	int max = 0;
	for (int i = 0; i < 65001; i++)
	{
		if (dat[i] > dat[max])
		{
			max = i;
		}

	}
	cout << max;

	return 0;
}