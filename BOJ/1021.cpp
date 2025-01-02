#include <bits/stdc++.h>
using namespace std;


int main() {

	ios::sync_with_stdio(0);
	cin.tie(0);

	deque<int> DQ;

	int N, M;

	cin >> N >> M;

	for (int i = 1; i <= N; i++) {
		DQ.push_back(i);
	}

	int left = DQ.size() / 2;
	int right = DQ.size() / 2;
	int count = 0;
	int target;

	int index;
	for (int i = 0; i < M; i++) {

		cin >> target;

		for (int i = 0; i < N; i++) {
			if (target == DQ[i])
			{
				index = i;
				break;
			}
		}

		if (index >=DQ.size()-index) {

			while (true) {
				if (DQ.front() == target) {
					DQ.pop_front();
					break;
				}
				count++;
				DQ.push_front(DQ.back());
				DQ.pop_back();
				
			}
		}


		else {

			while (true) {
				if (DQ.front() == target) {
					DQ.pop_front();
					break;
				}
				count++;
				DQ.push_back(DQ.front());
				DQ.pop_front();
				
			}
		}

	}
	cout << count;
}