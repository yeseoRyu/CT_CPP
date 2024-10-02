#include <iostream>
using namespace std;

void run(int t) {
	if (t == 0) return;
	run(t / 2);
	cout << t << " ";
}


int main() {
	int t;
	cin >> t;

	run(t);
	return 0;
}