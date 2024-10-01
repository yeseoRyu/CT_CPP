#include <iostream>
#include <cstring>
using namespace std;

struct Train {
	int win;
	char name[8];
};

Train train[7] = {
	{15, "summer"},
	{33, "cloe"},
	{24, "summer"},
	{28, "niki"},
	{32, "jenny"},
	{20, "summer"},
	{40, "coco"}
};

int isSame(char name[9], char win[9]) {
	if (strcmp(name, win) == 0) return 1;
	else return 0;
}

int main() {
	char t[9];
	int age;

	cin >> t >> age;

	for (int i = 0; i < 6; i++)
	{
		if (isSame(train[i].name, t) == 1 && age == train[i].win)
		{
			cout << i;
			break;
		}
	}

	return 0;
}