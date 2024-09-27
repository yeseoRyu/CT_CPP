#include <iostream>
using namespace std;

int vect[3][3] = { 3, 7, 4, 2, 2, 4, 2, 2, 5 };

int count(int t) {
	int cnt = 0;
	for (int y = 0; y < 4; y++)
	{
		for (int x = 0; x < 6; x++)
		{
			if (vect[y][x] == t) cnt++;
		}
	}
	return cnt;
}

int main() {
	int target[3];
	int max, t;

	for (int i = 0; i < 3; i++) cin >> target[i];

	max = 0;
	for (int i = 0; i < 3; i++)
	{
		if (max < count(target[i]))
		{
			max = count(target[i]);
			t = target[i];
		}
	}

	cout << t;
	return 0;
}