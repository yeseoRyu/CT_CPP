#include <iostream>
using namespace std;

int main() {
	char arr[7] = { 'A', 'B', 'C', 'Z', 'E', 'T', 'Q' };
	char black[6];
	int y, x, flag;

	cin >> black;


	for (y = 0; y < 5; y++) {
		for (x = 0; x < 7; x++) {
			if (black[y] == arr[x]) {
				flag = 1;
				break;
			}
			else flag = 0;
		}
		cout << black[y] << "=";
		if (flag == 1) cout << "마을사람";
		else cout << "외부사람";
		cout << endl;
	}

	return 0;
}