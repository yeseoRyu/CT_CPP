#include <iostream>
using namespace std;

int main() {
	int arr[8] = { 4,3,6,1,3,1,5,3 };
	int num;
	int cnt = 0;

	cin >> num;
	for (int i = 0; i < 8; i++) {
		if (arr[i] == num) {
			cnt++;
		};
	};
	cout << "����" << num << "������" << cnt << "��";

	return 0;
}