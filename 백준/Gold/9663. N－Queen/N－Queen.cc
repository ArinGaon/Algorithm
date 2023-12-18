#include <iostream>
using namespace std;
int n;
int cnt = 0;
// 체스판 tmp, 체스판의 좌표를 (x,y)라고 할 때 tmp[x] = y; 라고 생각
int tmp[16] = { 0, }; // 문제에서 n의 범위를 15이하로 지정 

void nqueen(int col) {
	if (col == n) { // n번째 퀸까지 무사히 체스판에 배치되었다면
		cnt += 1;   // 경우의 수 1 추가
		return;
	}
	for (int i = 0; i < n; i++) {
		bool check = true;
		for (int j = 0; j < col; j++) {
			tmp[col] = i; // 현재의 col,i에 퀸을 놓는다고 가정
			// 같은 col에 있거나, 대각선의 위치에 있을 때 false
			if (tmp[j] == tmp[col] || j - col == tmp[j] - tmp[col] || j - col == tmp[col] - tmp[j]) {
				check = false;
				break;
			}
		}
		if (check) { // check가 true이면 퀸을 놓았으니 
			nqueen(col + 1); // col+1을 하여 다음 열로 넘어감
		}
	}
}

int main() {
	cin >> n;

	for (int i = 0; i < n; i++) {
		tmp[0] = i; // 첫번째줄 i번째 위치에 퀸을 놓고 시작
		nqueen(1);
	}

	cout << cnt << "\n";

	return 0;
}