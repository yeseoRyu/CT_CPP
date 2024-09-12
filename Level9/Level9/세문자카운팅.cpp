#include <iostream>

using namespace std;

char arr[11];
int len;

int count(char a) {
	int cnt = 0;
	for (int i = 0; i < len; i++) {
		if (arr[i] == a) cnt++;
	}
	return cnt;
}

int main() {
	cin >> arr;

	char a, b, c;
	cin >> a >> b >> c;

	len = 0;
	for (int i = 0; i < 11; i++) {
		if (arr[i] == '\0') {
			len = i;
			break;
		}
	}

	cout << a << "=" << count(a) << endl
		<< b << "=" << count(b) << endl
		<< c << "=" << count(c);
	return 0;
}