#include<bits/stdc++.h>
using namespace std;

const int MX = 1000005;
char dat[MX];
int pre[MX], nxt[MX];
int unused = 1;


int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	fill(pre, pre + MX, -1);
	fill(nxt, nxt + MX, -1);
	string a;
	int M;
	cin >> a;
	cin >> M;
	for (int i = 0; i < a.length(); i++) {
		dat[unused] = a[i];
		pre[unused] = unused - 1;
		nxt[unused] = unused + 1;
		unused++;
	}
	nxt[0] = 1;
	nxt[unused - 1] = -1;
	int cur = unused-1;
	for (int i = 0; i < M; i++) {
		char c;
		cin >> c;
		if (c == 'L') {
			if (pre[cur] != -1) cur = pre[cur];
		}
		else if (c == 'D') {
			if (nxt[cur] != -1) cur = nxt[cur];
		}
		else if (c == 'B') {
			if (pre[cur] != -1) {
				nxt[pre[cur]] = nxt[cur];
				if (nxt[cur] != -1) pre[nxt[cur]] = pre[cur];
				cur = pre[cur];
			}
		}
		else if (c == 'P') {
			char tmp;
			cin >> tmp;
			dat[unused] = tmp;
			pre[unused] = cur;
			nxt[unused] = nxt[cur];
			if (nxt[cur] != -1) pre[nxt[cur]] = unused;
			nxt[cur] = unused;
			cur = unused;
			unused++;
		}
	}
	cur = nxt[0];
	while (cur != -1) {
		cout << dat[cur];
		cur = nxt[cur];
	}
}