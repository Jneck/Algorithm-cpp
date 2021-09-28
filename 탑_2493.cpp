#include<bits/stdc++.h>
using namespace std;

//���̸� �����ϴ� �迭�� �ڽ��� �������� ���� ž�� �ε����� �����ϴ� �迭
int height[500005];
int lsr[500005];

void findLsr(int idx, int idx2) { //idx2�� ���� ž �ε���
	//idx�� ���� �Լ����� lsr�� ã������ �ε���
	//�Լ� Ż���� ���� ���� ã������ ž ���̺��� Ŭ���
	if (height[idx] > height[idx2]) lsr[idx2] = idx;
	else if (lsr[idx] == 0) lsr[idx2] = 0;
	else findLsr(lsr[idx],idx2);
}

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int N;
	cin >> N;

	//height lsr �Ѵ� 0����������
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