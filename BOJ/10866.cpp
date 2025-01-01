#include <bits/stdc++.h>
using namespace std;


int main() {

	deque<int> DQ;

	int N;
	string s;
	cin >> N;

	for (int i = 0; i < N; i++) {
		int num;
		cin >> s;
		if (s == "push_back") {
			cin >> num;
			DQ.push_back(num);
		}
		else if (s == "push_front") {
			cin >> num;
			DQ.push_front(num);
		}
		else if (s == "front") {
			if (DQ.empty() == 1)
				cout << -1 << '\n';
			else
				cout << DQ.front() << '\n';
		}
		else if (s == "back") {
			if (DQ.empty())
				cout << -1 << '\n';
			else
				cout << DQ.back() << '\n';
		}
		else if (s == "pop_front") {

			if (DQ.empty())
				cout << -1 << '\n';

			else {
				cout << DQ.front() << '\n';
				DQ.pop_front();
			}
		}

		else if (s == "pop_back") {

			if (DQ.empty())
				cout << -1 << '\n';

			else {
				cout << DQ.back() << '\n';
				DQ.pop_back();
			}
		}
		else if (s == "size") {
			cout << DQ.size() << '\n';
		}
		else if (s == "empty") {
			cout << DQ.empty() << "\n";
		}

	}
	


}