#include <iostream>
using namespace std;

int main() {
	int t, y, x;
	cin >> t;

	y = 0;
	while (y < 3) {
		x = 0;
		while (x < 5) {
			cout << t;
			x++;
		}
		cout << endl;
		y++;
	}

	return 0;
}