#include <bits/stdc++.h>
using namespace std;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	stack<int> S;
	int N, x;
	string op;


	cin >> N;
	while (N--) {

		cin >> op;

		if (op == "push") {
			cin >> x;
			S.push(x);
		}
		else if (op == "pop") {

			if (S.empty())
				cout << -1 << '\n';
			else {
				cout << S.top() << '\n';
				S.pop();
			}

		}
		else if (op == "size") {
			cout << S.size() << '\n';
		}
		else if (op == "empty") {
			cout << S.empty() << '\n';
		}
		else if (op == "top") {

			if (S.empty())
				cout << -1 << '\n';

			else
				cout << S.top() << '\n';
		}




	}

}