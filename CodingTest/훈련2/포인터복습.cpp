#include <iostream>
#include <cstring>
using namespace std;

struct Robot {
	int a, b;
	char t[7];
};

int main() {
	Robot robert;
	cin >> robert.a >> robert.b >> robert.t;
	Robot* p = &robert;

	cout << p->a + p->b << " " << p->t;

	return 0;
}