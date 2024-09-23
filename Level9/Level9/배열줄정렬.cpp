#include <iostream>
using namespace std;

int main() {
	char arr[2][6] = { "DATAW", "BBQK" };
	int t, y, i, temp;

	cin >> t;
	if (t % 2 != 0) {
		for (y = 0; y < 5; y++) {
			for (i = y + 1; i < 5; i++) {
				if (arr[0][i] == '\0') break;
				else if (arr[0][y] > arr[0][i]) {
					temp = arr[0][y];
					arr[0][y] = arr[0][i];
					arr[0][i] = temp;
				}
			}
		}
	}
	else {
		for (y = 0; y < 4; y++) {
			for (i = y + 1; i < 4; i++) {
				if (arr[1][i] == '\0') break;
				else if (arr[1][y] > arr[1][i]) {
					temp = arr[1][y];
					arr[1][y] = arr[1][i];
					arr[1][i] = temp;
				}
			}
		}
	}

	// Ãâ·Â
	for (y = 0; y < 2; y++) {
		for (i = 0; i < 5; i++) {
			if (arr[y][i] == '\0') break;
			else cout << arr[y][i];
		}
		cout << endl;
	}

	return 0;
}