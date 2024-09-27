#include <iostream>
using namespace std;

int pass[4] = { 3,7,4,9 };

int isSame(int input[4]) {
	for (int i = 0; i < 4; i++)
	{
		if (input[i] != pass[i]) return 1;
	}
	return 0;
}

int main() {
	int input[4];
	for (int i = 0; i < 4; i++) cin >> input[i];

	if (isSame(input) == 0) cout << "pass";
	else cout << "fail";
	return 0;
}