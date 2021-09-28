#include <bits/stdc++.h>
using namespace std;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	stack<int> s;

	int N;
	cin >> N;
	for (int i = 0; i < N; i++) {
		string ord;
		cin >> ord;
		if (ord == "push") {
			int x;
			cin >> x;
			s.push(x);
		}
		else if (ord == "pop") {
			if(s.empty()) cout << -1 << "\n";
			else {
				cout << s.top() << "\n";
				s.pop();
			}
		}
		else if (ord == "top") {
			if (s.empty()) cout << -1 << "\n";
			else cout << s.top() << "\n";
		}
		else if (ord == "empty") {
			cout << s.empty() << "\n";
		}
		else{
			cout << s.size() << "\n";
		}
	}
}