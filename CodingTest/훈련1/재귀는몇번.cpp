#include <iostream>
#include <cstring>
using namespace std;

int br, lv, cnt;

void run(int lev) {
	cnt++;
	if (lev == lv) {
		return;
	}

	for (int i = 0; i < br; i++) {
		run(lev + 1);
	}
}

int main() {
	cin >> br >> lv;
	run(0);
	cout << cnt;
	return 0;
}