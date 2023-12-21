#include <iostream>
using namespace std;

int zeros, zerocnt; // zeros : 0이 들어가는 위치변수, zerocnt : 스도쿠 map에서 0의 갯수
int board[9][9]; // 스도쿠 map
bool already[10]; // 숫자가 들어가있는지 확인하는 배열

void check(int x, int y) { // board[i][j]에 넣을 수 있는 k의 값을 찾는 함수
	int xx = (x / 3) * 3, yy = (y / 3) * 3;
	for (int i = 0; i < 10; i++) 
		already[i] = false;
	for (int i = 0; i < 9; i++) {
		already[board[i][y]] = true;
		already[board[x][i]] = true;
	}
	for (int i = 0; i < 3; i++) {
		for(int j = 0; j < 3;j++)
			already[board[xx + i][yy + j]] = true;
	}
}

bool propercheck(int x, int y, int k) { // k가 입력되었을 때, 스도쿠 법칙에 위배되는지 확인하는 함수
	int xx = (x / 3) * 3, yy = (y / 3) * 3;
	for (int i = 0; i < 9; i++)
		if (board[i][y] == k)
			return false;
	for (int i = 0; i < 9; i++)
		if (board[x][i] == k)
			return false;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++)
			if (board[xx + i][yy + i] == k)
				return false;
	}
	return true;
}

bool sudoku(int n) { // 스도쿠
	if (zerocnt == zeros) { // dfs가 모두 완료되었을 때
		for (int i = 0; i < 9; i++) {
			for (int j = 0; j < 9; j++)
				cout << board[i][j] << ' '; // 보드 출력
			cout << "\n";
		}
		return true;
	}
	int i = n / 9, j = n % 9;

	if (board[i][j] == 0) {
		for (int k = 1; k <= 9; k++) {
			check(i, j);

			if (already[k] == false && propercheck(i, j, k)) {
				board[i][j] = k;
				already[k] = true;
				zerocnt++;
				if (sudoku(n + 1))
					return true;
				board[i][j] = 0;
				already[k] = false;
				zerocnt--;
			}
		}
	}
	else return sudoku(n + 1);

	return false;
}

int main() {
	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> board[i][j];
			if (board[i][j] == 0) zeros++;
		}
	}
	sudoku(0);
	return 0;
}