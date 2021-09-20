#include<bits/stdc++.h>
using namespace std;

//요세푸스 문제
int main() {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N, K;
	cin >> N >> K;
	list<int> L;
	list<int> L2;
	for (int i = 0; i < N; i++) {
		L.push_back(i + 1);
	}
	auto t = L.begin();
	while (!L.empty()) {
		for (int i = 0; i < K-1; i++) {
			if (t != L.end())t++;
			else {
				t = L.begin(); 
				t++;
			}
		}
		if (t == L.end()) t = L.begin();
		L2.push_back(*t);
		t = L.erase(t);
	}
	cout << "<";
	for (auto i : L2) {
		if (i == L2.back())break;
		cout << i << ", ";
	}
	cout << L2.back() <<">";
	
}