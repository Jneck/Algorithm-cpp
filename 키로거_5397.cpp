#include<bits/stdc++.h>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	cin >> T;
	while (T--) {
		string s;
		cin >> s;
		list<char> L = {};
		auto t = L.begin();
		for (int i = 0; i < s.length(); i++) {
			if (s[i] == '<') {
				if (t != L.begin()) t--;
			}
			else if (s[i] == '>') {
				if (t != L.end()) t++;
			}
			else if (s[i] == '-') {
				if (t != L.begin()) {
					t = L.erase(--t);
				}
			}
			else {
				L.insert(t, s[i]);
			}
		}
		for (auto i : L) cout << i;
		cout << "\n";
	}
}