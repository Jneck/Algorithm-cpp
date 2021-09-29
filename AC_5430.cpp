#include<bits/stdc++.h>
using namespace std;

int main(void) {
	cin.tie(0);
	ios::sync_with_stdio(0);
	int T;
	cin >> T;
	for (int i = 0; i < T; i++) {
		string p;
		cin >> p;
		int n;
		cin >> n;
		deque<short> v;
		//R �ذ����� re ����. ���� �� for�� Ż������ er����
		bool re = true;
		bool er = false;
		//s�� �޾Ƽ� s2�� �ѱ��ھ� ������ ���� �ϼ��Ǹ� v�� Ǫ��
		string s, s2;
		cin >> s;
		for (int k = 0; s[k] != ']'; k++) {
			if (s[k] == '[' || s[k] == ',') {
				if (!s2.empty()) {
					v.push_back(stoi(s2));
					s2.clear();
				}
			}
			else {
				s2.push_back(s[k]);
			}
		}
		//������ s2�� �����ִ� ���� ó��
		if (!s2.empty()) {
			v.push_back(stoi(s2));
		}
		
		
		//R�� D�� ���� ��� ����
		for (auto k : p) {
			if (k == 'R') re = !re;
			else if (k == 'D') {
				if (v.empty()) {
					cout << "error" << "\n";
					er = true;
					break;
				}
				else {
					if (re) v.pop_front();
					else  v.pop_back();
				}
			}
		}

		//���� �߻��� �ٷ� ���� testcase�� �Ѿ
		if (er) continue;

		//��±���. ���� re���°� �����������̸� ������ �ѹ�����
		
		cout << "[";
		if (!v.empty()) {
			if (re) {
				//v.back()��ĭ ������ ,�� ���� ���� ���
				while (!v.empty()) {
					cout << v.front();
					v.pop_front();
					if (!v.empty()) {
						cout << ",";
					}
				}
			}
			else {
				while (!v.empty()) {
					cout << v.back();
					v.pop_back();
					if (!v.empty()) {
						cout << ",";
					}
				}
			}
			//������ ���� ���� ���
			
		}
		cout << "]" << "\n";
	}
}