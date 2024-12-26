#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	queue<int> Q;
	while (N--) {
		string op;
		int num;
		cin >> op;
		if (op == "push") {
			cin >> num;
			Q.push(num);
		}
		else if (op == "pop") {
			if (Q.empty() == 1)
				cout << -1 << '\n';
			else {
				cout << Q.front() << '\n';
				Q.pop();

			}
		}
		else if (op == "size") {
			cout << Q.size() << '\n';
		}
		else if (op == "empty") {
			cout << Q.empty() << '\n';

		}
		else if (op == "front") {

			if (Q.empty() == 1)
				cout << -1 << '\n';
			else
				cout << Q.front() << '\n';
		}
		else if (op == "back") {
			if (Q.empty() == 1) 
				cout << -1 << '\n';
			
			else
				cout << Q.back()<<'\n';
			
		}


	}
}