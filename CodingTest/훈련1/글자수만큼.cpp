#include <iostream>
#include <cstring>
using namespace std;

void run(int lev) {
	cout << lev << " ";
	if (lev == 1) {
		return;
	}

	run(lev - 1);
	cout << lev << " ";
}

int main() {
	char input[11];
	cin >> input;
	int n = strlen(input);
	run(n);
	return 0;
}