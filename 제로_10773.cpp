#include <bits/stdc++.h>
using namespace std;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	stack<int> s;
	int K;
	cin >> K;
	for (int i = 0; i < K; i++) {
		int N;
		cin >> N;
		if (N == 0) {
			s.pop();
		}
		else s.push(N);
	}
	int sum = 0;
	while (!s.empty()) {
		sum += s.top();
		s.pop();
	}
	cout << sum;
}