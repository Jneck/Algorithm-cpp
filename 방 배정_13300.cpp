#include<bits/stdc++.h>
using namespace std;

int Barr[6];
int Garr[6];

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	//ÇÐ»ý ¼ö : 1<=N<=1000 1<K<=1000
	int N, K, S, Y;
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> S >> Y;
		if (S == 0) {
			switch (Y)
			{
			case 1:
				Garr[0]++;
				break;
			case 2:
				Garr[1]++;
				break;
			case 3:
				Garr[2]++;
				break;
			case 4:
				Garr[3]++;
				break;
			case 5:
				Garr[4]++;
				break;
			case 6:
				Garr[5]++;
				break;
			}
		}
		else {
			switch (Y)
			{
			case 1:
				Barr[0]++;
				break;
			case 2:
				Barr[1]++;
				break;
			case 3:
				Barr[2]++;
				break;
			case 4:
				Barr[3]++;
				break;
			case 5:
				Barr[4]++;
				break;
			case 6:
				Barr[5]++;
				break;
			}
		}
	}
	int room = 0;
	for (int i = 0; i < 6; i++) {
		if (Barr[i] % K == 0 ) {
			room = room + (Barr[i] / K);
		}
		else {
			room = room + (Barr[i] / K) + 1;
		}
	}
	for (int i = 0; i < 6; i++) {
		if (Garr[i] % K == 0) {
			room = room + (Garr[i] / K);
		}
		else {
			room = room + (Garr[i] / K) + 1;
		}
	}
	cout << room;
}