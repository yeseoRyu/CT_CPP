#include <iostream>
using namespace std;

void abc(int t, int cnt) {
	if (cnt == 4) return;
	abc(t + 2, cnt + 1);
	cout << t << " ";
}


int main() {
	int t, cnt;
	cin >> t;
	cnt = 0;
	abc(t, cnt);
	return 0;
}