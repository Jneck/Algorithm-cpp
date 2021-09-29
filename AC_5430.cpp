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
		//R 해결해줄 re 설정. 에러 때 for문 탈출해줄 er설정
		bool re = true;
		bool er = false;
		//s로 받아서 s2로 한글자씩 쌓은후 숫자 완성되면 v로 푸쉬
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
		//마지막 s2에 남아있는 글자 처리
		if (!s2.empty()) {
			v.push_back(stoi(s2));
		}
		
		
		//R과 D에 따라 명령 수행
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

		//에러 발생시 바로 다음 testcase로 넘어감
		if (er) continue;

		//출력구문. 최종 re형태가 리버스상태이면 리버스 한번해줌
		
		cout << "[";
		if (!v.empty()) {
			if (re) {
				//v.back()한칸 전까지 ,와 같이 숫자 출력
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
			//마지막 원소 따로 출력
			
		}
		cout << "]" << "\n";
	}
}