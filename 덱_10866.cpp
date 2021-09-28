#include <bits/stdc++.h>
using namespace std;


int main(void) {
	deque<int> d;
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string ord;
		cin >> ord;
		if (ord == "push_front") {
			int x;
			cin >> x;
			d.push_front(x);
		}
		else if (ord == "push_back") {
			int x;
			cin >> x;
			d.push_back(x);
		}
		else if (ord == "pop_front") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.front() << "\n";
				d.pop_front();
			}
		}
		else if (ord == "pop_back") {
			if (d.empty()) cout << -1 << "\n";
			else {
				cout << d.back() << "\n";
				d.pop_back();
			}
		}
		else if (ord == "front") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.front() << "\n";
		}
		else if (ord == "empty") {
			cout << d.empty() << "\n";
		}
		else if (ord == "back") {
			if (d.empty()) cout << -1 << "\n";
			else cout << d.back() << "\n";
		}
		else {
			cout << d.size() << "\n";
		}
	}
}