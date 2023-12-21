#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

bool team[20] = {};
int score[20][20] = {};
int N;
int resmin = 99999999;

void divteam(int index, int cnt) {
	vector<int> start; // start team
	vector<int> link;  // link team
	int start_score = 0; // start team score
	int link_score = 0;  // link team score

	if (cnt == (N / 2)) { // 절반을 뽑으면 나머지 절반은 자동배정이므로 N/2
		for (int i = 0; i < N; i++) {
			if (team[i] == true) // start 팀에 선택되는 경우
				start.push_back(i);
			else                 // link 팀에 자동으로 배정
				link.push_back(i);
		}
		for(int i = 0; i < (N / 2); i++)
			for (int j = 0; j < (N / 2); j++) {
				start_score += score[start[i]][start[j]];
				link_score += score[link[i]][link[j]];
			}
		// resmin과 start_score, link_score의 차(의 절댓값)을 비교하면서 계속 대입해서 최솟값구하기
		if (abs(start_score - link_score) < resmin) 
			resmin = abs(start_score - link_score);
		return;
	}
	for (int i = index; i < N; i++) {
		if (team[i])
			continue;
		else {
			team[i] = true;
			divteam(i, cnt + 1);
			team[i] = false;
		}
	}
}

int main() {
	cin >> N;

	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> score[i][j];

	divteam(0, 0);
	cout << resmin;
	return 0;
}