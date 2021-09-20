#include<bits/stdc++.h>
using namespace std;

int barr[26];
int aarr[26];

int main(void) {
	string a, b;
	cin >> a >> b;
	for (int i = 0; i < a.length(); i++) {
		aarr[a[i] - 97]++;
	}
	for (int i = 0; i < b.length(); i++) {
		barr[b[i] - 97]++;
	}
	int answer = 0;
	for (int i = 0; i < 26; i++) {
		if (aarr[i] == barr[i]) {
			continue;
		}
		else if (aarr[i] > barr[i]) {
			answer = answer + (aarr[i] - barr[i]);
		}
		else if (aarr[i] < barr[i]) {
			answer = answer +(barr[i] - aarr[i]);
		}
	}
	cout << answer;
}