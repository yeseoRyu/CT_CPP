#include <iostream>
using namespace std;

int main() {
	struct MART {
		int strawberry;
		int melon;
		int waterMelon;
	};
	char t;

	MART A;
	A.strawberry = 300;
	A.melon = 500;
	A.waterMelon = 1000;

	MART B;
	B.strawberry = 450;
	B.melon = 450;
	B.waterMelon = 900;

	MART C;
	C.strawberry = 200;
	C.melon = 150;
	C.waterMelon = 700;

	cin >> t;
	if (t == 'A') {
		cout << (A.strawberry + A.melon + A.waterMelon) / 3;
	}
	else if (t == 'B') {
		cout << (B.strawberry + B.melon + B.waterMelon) / 3;
	}
	else {
		cout << (C.strawberry + C.melon + C.waterMelon) / 3;
	}

	return 0;
}