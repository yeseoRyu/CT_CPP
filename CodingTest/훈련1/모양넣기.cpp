#include <iostream>
#include <cstring>
using namespace std;

int main() {
	struct sketchbook {
		char image[3][3];
	};
	sketchbook t;
	int dat[100] = { 0 };

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cin >> t.image[y][x];
		}
	}
	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			dat[t.image[y][x]] = 1;
		}
	}
	for (int i = 0; i < 100; i++)
	{
		if (dat[i] == 1) cout << (char)i;
	}



	return 0;
}