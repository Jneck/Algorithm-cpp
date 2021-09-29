#include<bits/stdc++.h>
using namespace std;

int main(void) {
	deque<int> dq;
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, M;
	cin >> N >> M;
	for (int i = 1; i < N+1; i++) {
		dq.push_back(i);
	}
	int sum = 0;
	for (int i = 0; i < M; i++) {
		int x;
		int cou = 0;
		cin >> x;
		while (x != dq.front()) {
			dq.push_back(dq.front());
			dq.pop_front();
			cou++;
		}
		if (cou == 0);
		else if (dq.size()/2 >= cou) {
			sum += cou;
		}
		else {
			sum += (dq.size() - cou);
		}
		dq.pop_front();
	}
	cout << sum;
}