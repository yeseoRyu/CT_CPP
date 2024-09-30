#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char town[3][4] = { "CDA", "BMZ", "QPO" };
	char black[5] = { 0 };
	char dat[100] = { 0 };
	int cnt = 0;
	cin >> black;

	for (int y = 0; y < 3; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			dat[town[y][x]] = 1;
		}
	}

	for (int i = 0; i < 100; i++)
	{
		if (dat[black[i]] == 1) cnt++;
	}

	cout << cnt << "Έν";
	return 0;
}