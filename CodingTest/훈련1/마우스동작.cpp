#include <iostream>
#include <cstring>
using namespace std;

char mouse[5][6] = {
	"up", "down", "left", "right", "click"
};
int dy = 5;
int dx = 5;
int n;

int isSame(char input[6]) {
	int type = 0;
	for (int y = 0; y < 5; y++) {
		for (int x = 0; x < 5; x++) {
			if (mouse[y][x] != input[x]) break;
			type = y;
		}
	}
	return type;
}

void move(int t) {
	if (t == 0) {
		dy = dy - 1;
	}
	else if (t == 1) {
		dy = dy + 1;
	}
	else if (t == 2) {
		dx = dx - 1;
	}
	else if (t == 3) {
		dx = dx + 1;
	}
	else if (t == 4) {
		cout << dy << "," << dx << endl;
	}
}

int main() {
	char input[6];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> input;
		int type = isSame(input);
		move(type);
	}
	return 0;
}