#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char arr[5][4] = { "ABC", "AGH", "HIJ", "KAB", "ABC" };
	char dat[100] = { 0 };

	for (int y = 0; y < 5; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			dat[arr[y][x]]++;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (dat[i] > 0)
		{
			for (int x = 0; x < dat[i]; x++)
			{
				cout << ((char)i);
			}
		}
	}

	return 0;
}