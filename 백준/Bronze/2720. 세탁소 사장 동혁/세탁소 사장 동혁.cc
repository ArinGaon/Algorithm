// 2720번 세탁소 사장 동혁
#include <iostream>

using namespace std;
int Quarter = 25;
int Dime = 10;
int Nickel = 5;
int Penny = 1;

int main() {
	int T, C; // 테스트 케이스의 갯수 T, 거스름돈(단위 : 센트) C
	cin >> T;
	int tmp;

	for (int i = 0; i < T; i++) {
		cin >> C;
		cout << C / Quarter << " "; tmp = C % Quarter;
		cout << tmp / Dime << " "; tmp %= Dime;
		cout << tmp / Nickel << " "; tmp %= Nickel;
		cout << tmp / Penny << "\n";
	}
	return 0;
}