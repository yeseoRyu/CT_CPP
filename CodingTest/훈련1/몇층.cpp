#include <iostream>
#include <cstring>
using namespace std;

int apt[5][3] = {
{15, 18, 17},
{4, 6, 9},
{10, 1, 3},
{7, 8, 9},
{15, 2, 6}
};

int isPattern(int fam[3]) {
	int cnt = 0;
	int lv = 1;
	for (int y = 4; y >= 0; y--)
	{
		for (int x = 0; x < 3; x++)
		{
			if (fam[x] == apt[y][x]) cnt++;
			if (cnt == 3) return lv;
		}
		lv++;
	}
	return 0;
}

int main() {
	int fam[3] = { 0 };
	for (int i = 0; i < 3; i++) cin >> fam[i];

	int lv;
	lv = isPattern(fam);

	cout << lv << "Ãþ";

	return 0;
}