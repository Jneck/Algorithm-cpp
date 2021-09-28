#include<bits/stdc++.h>
using namespace std;

//높이를 저장하는 배열과 자신의 레이저에 맞은 탑의 인덱스를 저장하는 배열
int height[500005];
int lsr[500005];

void findLsr(int idx, int idx2) { //idx2는 본래 탑 인덱스
	//idx는 현재 함수에서 lsr을 찾으려는 인덱스
	//함수 탈출은 먼저 본래 찾으려던 탑 높이보다 클경우
	if (height[idx] > height[idx2]) lsr[idx2] = idx;
	else if (lsr[idx] == 0) lsr[idx2] = 0;
	else findLsr(lsr[idx],idx2);
}

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;

	//height lsr 둘다 0은쓰지않음
	for (int i = 1; i < N+1; i++) {
		int x;
		cin >> x;
		height[i] = x;
		if (i == 1) lsr[i] = 0;
		else findLsr(i-1, i);
	}
	for (int i = 1; i < N + 1; i++) {
		cout << lsr[i] << " ";
	}
}