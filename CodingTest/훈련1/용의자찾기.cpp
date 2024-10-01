#include <iostream>
#include <cstring>
using namespace std;

struct Coord {
	int y, x;
};

int main() {
	Coord input[4];
	int vect[4][3] = { 0 };

	for (int i = 0; i < 4; i++)
	{
		cin >> input[i].y >> input[i].x;
	}



	for (int i = 0; i < 4; i++)
	{
		int dy = input[i].y;
		int dx = input[i].x;

		vect[dy][dx] = 5;
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}