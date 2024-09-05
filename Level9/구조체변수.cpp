#include <iostream>
using namespace std;

int main() {
	struct Person {
		int age;
		int height;
	};
	Person a, b;

	cin >> a.age >> a.height >> b.age >> b.height;
	int ageAvg = (a.age + b.age) / 2;
	int heightAvg = (a.height + b.height) / 2;
	cout << ageAvg << " " << heightAvg;
	return 0;
}