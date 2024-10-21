#include <iostream>
#include <cstring>
using namespace std;

int main() {
	int row, col;
	int flag = 0;

	int arr[5][5] = { 0 };

	for (int y = 0; y < 6; y++) {
		cin >> row >> col;
		arr[row][col]++;
		if (arr[row][col] > 1) flag = 1;
	}

	if (flag == 1) cout << "중복된좌표발견";
	else cout << "중복없음";


	return 0;
}