#include <bits/stdc++.h>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);

	stack <int> S;
	int k,sum=0;

	cin>>k;
	int num;
	while (k--) {
		cin >> num;
		if (num == 0) {
			sum -= S.top();
			S.pop();
		}
		else {
			S.push(num);
			sum += num;
		}

	}
	
	cout << sum<<'\n';
	
}