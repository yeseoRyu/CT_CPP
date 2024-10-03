#include <iostream>
#include <cstring>
using namespace std;

char input[11];

int index(char t) {
	for (int i = 0; i < 10; i++) {
		if (input[i] == t) return i;
	}
}

int main() {
	char a, b;
	int ai, bi, len;
	cin >> input >> a >> b;

	len = strlen(input);

	ai = index(a);
	bi = index(b);

	input[ai - 1] = '#';
	input[ai + 1] = '#';
	input[bi - 1] = '#';
	if (bi + 1 < len) input[bi + 1] = '#';

	for (int i = 0; i < len; i++) cout << input[i];
	return 0;
}