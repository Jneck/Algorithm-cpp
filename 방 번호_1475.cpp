#include<bits/stdc++.h>
using namespace std;

//6과 9는 서로 뒤집어 사용가능

int arr[10];

int main(void) {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int N;	//0<=N<=1,000,000
	cin >> N;
	if (N == 0) cout << 1;
	else {
		while (N != 0) {
			arr[(N % 10)]++;
			N = N / 10;
		}
		arr[6] += arr[9];
		if (arr[6] % 2 == 0) arr[6] /= 2;
		else arr[6] = arr[6] / 2 + 1;
		arr[9] = 0;
		int max = 0;
		for (int i = 0; i < 10; i++) {
			if (max < arr[i]) max = arr[i];
		}
		cout << max;
	}
}