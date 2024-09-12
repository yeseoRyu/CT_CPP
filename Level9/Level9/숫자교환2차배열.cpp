#include <iostream>
using namespace std;
int arr[6][2];
int num, cnt, temp;
int main() {
	for (int x = 0; x < 6; x++) {
		for (int y = 0; y < 2; y++) {
			cin >> arr[x][y];
		}
	}
	for (int i = 0; i < 6; i++) {
		if (arr[num][0] < arr[num][1]) {
			temp = arr[num][0];
			arr[num][0] = arr[num][1];
			arr[num][1] = temp;
			cnt++;
		}
		num++;
	}
	for (int x = 0; x < 6; x++) {
		for (int y = 0; y < 2; y++) {
			cout << arr[x][y] << " ";
		}
		cout << "\n";
	}
	cout << cnt << "Έν";
	return 0;
}