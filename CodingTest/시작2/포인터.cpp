#include <iostream>
using namespace std;

int main() {
	char a, b;
	cin >> a >> b;
	char* p, * w;

	p = &b;
	w = &a;

	cout << *p << " " << *w;

	return 0;
}