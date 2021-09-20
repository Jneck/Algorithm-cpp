#include<bits/stdc++.h>
using namespace std;

int arr[30];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	int N;
	cin >> N;
	//a = 97
	while (N != 0) {
		string a, b;
		cin >> a >> b;
		if (a.length() == b.length()) {
			for (int i = 0; i < a.length(); i++) {
				arr[(a[i] - 97)]++;
			}
			for (int i = 0; i < b.length(); i++) {
				arr[(b[i] - 97)]--;
			}
			for (int i = 0; i < 30; i++) {
				if (arr[i] != 0) {
					cout << "Impossible" << "\n";
					break;
				}
				if (i == 29) {
					cout << "Possible" << "\n";
				}
			}
		}
		else {
			cout << "Impossible" << "\n";
		}
		for (int i = 0; i < 30; i++) {
			arr[i] = 0;
		}
		N--;
	}
}