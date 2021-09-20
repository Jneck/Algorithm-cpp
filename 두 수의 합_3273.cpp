#include<bits/stdc++.h>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int n, x;
	cin >> n;
	//1<= a <= 1,000,000
	vector<int> arr(n);
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());
	//1 ¡Â x ¡Â 2,000,000
	cin >> x;
	int answer = 0;
	int f = 0;
	int e = n-1;
	while (f < e) {
		if (arr[f] + arr[e] == x) {
			answer++;
			f++;
			e--;
		}
		else if (arr[f] + arr[e] < x) {
			f++;
		}
		else if (arr[f] + arr[e] > x) {
			e--;
		}
	}
	cout << answer;
}