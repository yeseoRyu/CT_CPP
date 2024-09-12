#include <iostream>
using namespace std;

char arr[8] = { 'M', 'I', 'N', 'Q', 'U', 'E', 'S', 'T' };

int length(char a) {
	int index = 0;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == a) break;
		index++;
	}
	return index;
}

int main() {
	char a, b, c;
	cin >> a >> b >> c;
	cout << a << "=" << length(a) << endl
		<< b << "=" << length(b) << endl
		<< c << "=" << length(c);
	return 0;
}