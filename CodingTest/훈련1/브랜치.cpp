#include <iostream>
#include <cstring>
using namespace std;

int le, br;

void run(int lv) {
	if (lv == le) return;

	for (int i = 0; i < br; i++) {
		run(lv + 1);
	}
}

int main() {
	cin >> le >> br;
	run(0);
	return 0;
}