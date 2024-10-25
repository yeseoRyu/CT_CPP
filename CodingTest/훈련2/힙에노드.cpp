#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

struct Node {
	int n;
	Node* p;
};

Node* head;
Node* last;

void addNode(int i) {
	if (head == NULL) {
		head = new Node();
		head->n = i;
		last = head;
	}
	else {
		last->p = new Node();
		last = last->p;
		last->n = i;
	}
}

int main() {
	int input;
	cin >> input;

	for (int i = 1; i <= 4; i++) {
		addNode(i * input);
	}

	Node* node = head;

	while (true) {
		if (node == NULL) break;
		cout << node->n << " ";
		node = node->p;
	}


	return 0;
}