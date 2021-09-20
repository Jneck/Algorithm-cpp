#include<bits/stdc++.h>
using namespace std;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	list<char> L;
	list<char>::iterator t;
	
	string a;
	int M;
	cin >> a;
	cin >> M;
	for (int i = 0; i < a.length(); i++) {
		L.push_back(a[i]);
	}
	t = L.end();
	for (int i = 0; i < M; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (t != L.begin()) t--;
		}
		else if (c == 'D') {
			if (t != L.end()) t++;
		}
		else if (c == 'B') {
			if (t != L.begin()) {
				// erase 구현 이런식으로
				t = L.erase(--t);
			}
		}
		else if (c == 'P'){
			char tmp;
			cin >> tmp;
			L.insert(t,tmp);
		}
	}
	for (auto i : L) cout << i ;
}