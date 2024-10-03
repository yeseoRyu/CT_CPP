#include <iostream>
#include <cstring>
using namespace std;

int map[7][7] = {
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 1, 0, 1, 0, 0,
		0, 0, 0, 1, 0, 0, 0,
		0, 0, 1, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0
};
int direct[4][2] = {
	-1, 0,
	0, -1,
	0, 1,
	1, 0
};

int rect(int dy, int dx) {
	int cnt = 0;
	for (int i = 0; i < 4; i++) {
		int ry = dy + direct[i][0];
		int rx = dx + direct[i][1];

		cnt += map[ry][rx];
	}
	return cnt;
}

int main() {
	int dy, dx;
	cin >> dy >> dx;

	int cnt = rect(dy, dx);
	cout << cnt;
	return 0;
}