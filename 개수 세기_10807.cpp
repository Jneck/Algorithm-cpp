#include <bits/stdc++.h>
using namespace std;

int arr[100];


int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;
	cin >> N;
	for (int i = 0; i < N; i++) cin >> arr[i];
	int v;
	cin >> v;
	int cou = 0;
	for (int i = 0; i < N; i++) {
		if (arr[i] == v) cou++;
	}
	cout << cou;
}