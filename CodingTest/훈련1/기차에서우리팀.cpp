#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int train[] = { 3, 7, 6, 4, 2, 9, 1, 7 };
	int team[3] = { 0 };
	int start = 0;

	for (int i = 0; i < 3; i++) cin >> team[i];


	for (int y = 0; y < 8; y++)
	{
		for (int x = 0; x < 3; x++)
		{
			if (team[x] == train[y])
			{
				start = y;
				break;
			}
		}
		if (start > 0) break;
	}

	cout << start << "¹ø~" << start + 2 << "¹ø Ä­";

	return 0;
}