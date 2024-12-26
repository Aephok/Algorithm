#include <iostream>
#include <bits/stdc++.h>

using namespace std;
int arr[10001];
int head, rear = 0;
void push(int x) {

	arr[rear++] = x;
}
int size() {
	return rear - head;
}

int empty() {
	if (size() == 0)
		return 1;
	return 0;
}

int pop() {

	if (size() == 0)
		return -1;
	else
		return arr[head++];
}

int front() {

	if (size() == 0)
		return -1;
	else
		return arr[head];

}


int back() {

	if (size() == 0)
		return -1;
	else
		return arr[rear-1];

}

int main()
{
	int N;

	string op;
	cin >> N;

	while (N--) {
		cin >> op;
		if (op == "push") {
			int num;
			cin >> num;
			push(num);
		}
		else if (op == "pop") {
			cout << pop() << '\n';
		}
		else if (op == "front")
			cout << front() << '\n';
		else if (op == "back")
			cout << back() << '\n';
		else if (op == "size")
			cout << size() << '\n';
		else if (op == "front")
			cout << front() << '\n';
		else if (op == "empty") {
			cout << empty() << '\n';
		}
	}

}