#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Node {
	char alph;
	Node* next;
};

Node* head;
Node* last;

void addNode(int n) {
	if (head == NULL) {
		head = new Node();
		head->alph = n + 54;
		last = head;
	}
	else {
		last->next = new Node();
		last = last->next;
		last->alph = n + 54;
	}

	cout << last->alph;
}

int main() {
	int t;
	cin >> t;

	for (int i = 1; i <= 4; i++) {
		addNode(t++);
	}

	return 0;
}