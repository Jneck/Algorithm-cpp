#include <bits/stdc++.h>
using namespace std;

int pos = 0;
queue<char> q;
bool suc = true;
stack<int> s;


int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int x;
		cin >> x;
		if (s.empty()) {
			while (pos != x) {
				s.push(++pos);
				q.push('+');
			}
			q.push('-');
			s.pop();
		}
		else {
			if (s.top() == x) {
				q.push('-');
				s.pop();
			}
			else if (s.top() < x) {
				while (pos != x) {
					s.push(++pos);
					q.push('+');
				}
				q.push('-');
				s.pop();
			}
			else {
				suc = false;
				break;
			}
		}
	}
	
	

	if (suc) {
		while (!q.empty()) {
			cout << q.front() << '\n';
			q.pop();
		}
	}
	else {
		cout << "NO";
	}

}