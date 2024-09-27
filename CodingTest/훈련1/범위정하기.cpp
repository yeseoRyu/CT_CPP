#include <iostream>
using namespace std;


int main() {
	int level[4][2] = { 10, 20, 30, 60, 100, 150, 200, 300 };
	int lv[4] = { 0 };
	int t;

	for (int i = 0; i < 6; i++)
	{
		cin >> t;
		if (t >= level[0][0] && t <= level[0][1]) lv[0]++;
		else if (t >= level[1][0] && t <= level[1][1]) lv[1]++;
		else if (t >= level[2][0] && t <= level[2][1]) lv[2]++;
		else if (t >= level[3][0] && t <= level[3][1]) lv[3]++;
	}

	for (int i = 0; i < 4; i++)
	{
		cout << "lev" << i << ":" << lv[i] << endl;
	}


	return 0;
}