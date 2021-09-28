#include<bits/stdc++.h>
using namespace std;

int main(void) {
	queue<int> q;
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string ord;
		cin >> ord;
		if (ord == "push") {
			int x;
			cin >> x;
			q.push(x);
		}
		else if (ord == "pop") {
			if (q.empty()) cout << -1 << "\n";
			else {
				cout << q.front() << "\n";
				q.pop();
			}
		}
		else if (ord == "front") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.front() << "\n";
		}
		else if (ord == "empty") {
			cout << q.empty() << "\n";
		}
		else if (ord == "back") {
			if (q.empty()) cout << -1 << "\n";
			else cout << q.back() << "\n";
		}
		else {
			cout << q.size() << "\n";
		}
	}
}