#include <iostream>
#include <cstring>
using namespace std;

int vect[4][4] = { 0 };

void paint(char t, int n) {
	if (t == 'G')
	{
		for (int i = 0; i < 4; i++) vect[n][i] = 1;
	}
	else if (t == 'S')
	{
		for (int i = 0; i < 4; i++) vect[i][n] = 1;
	}
}

int main() {
	char t;
	int n;

	for (int i = 0; i < 3; i++)
	{
		cin >> t >> n;
		paint(t, n);
	}

	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 4; x++)
		{
			cout << vect[y][x] << " ";
		}
		cout << endl;
	}

	return 0;
}