#include <iostream>
using namespace std;

int main() {
	char arr[5];
	int cnt;
	for (int i = 0; i < 5; i++) {
		cin >> arr[i];
	}

	cnt = 0;
	for (int i = 0; i < 5; i++) {
		if (arr[i] == 'A') cnt++;
	}
	cout << "����A�� " << cnt << "���߰�" << endl;

	if (cnt > 0) {
		for (int i = 0; i < 5; i++) {
			if (arr[i] == 'A') cout << i << "��" << endl;
		}
	}
	return 0;
}