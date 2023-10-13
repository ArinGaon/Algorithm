#include <iostream>
#include <string>
#include <algorithm>
#include <utility>

using namespace std;
string board[50];
 // WB버전과 BW 버전의 체스판과 다른 색의 총합을 구하는 것이 곧 재색칠해야하는 칸의 수
string WB[8] = {
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW"
};

string BW[8] = {
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB",
	"BWBWBWBW",
	"WBWBWBWB"
};
// WB와 BW의 경우를 모두 고려해야 하는 것이
// BW로 시작할 경우로 최소값을 구하는 것 보다 제일 첫 칸을 W로 바꿔 칠하고 최솟값을 구하는게
// 더 최솟값일 수 있기 때문

int WB_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != WB[i][j])
				cnt++;
		}
	}
	return cnt;
}

int BW_cnt(int x, int y) {
	int cnt = 0;
	for (int i = 0; i < 8; i++) {
		for (int j = 0; j < 8; j++) {
			if (board[x + i][y + j] != BW[i][j])
				cnt++; 
		}
	}
	return cnt;
}
int main() {
	int size[2];
	int cnt;
	int min_val = 12345;
	pair<int, int> p1;
	cin >> p1.first >> p1.second;

	for (int i = 0; i < p1.first; i++)
		cin >> board[i];

	for (int i = 0; i + 8 <= p1.first; i++) {
		for (int j = 0; j + 8 <= p1.second; j++) {
			int tmp;
			tmp = min(WB_cnt(i, j), BW_cnt(i, j));
			if (tmp < min_val) {
				min_val = tmp;
			}
		}
	}
	cout << min_val << endl;
	return 0;
}