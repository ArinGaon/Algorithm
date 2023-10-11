// 11005번 진법 변환2
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;
int N, B; // 10진법 수 N을 B진법으로 변환
string res = "";

int main() {
	cin >> N >> B;

	while (N > 0) {
		int tmp = N % B;
		if (tmp < 10)
			res += (char)(tmp + '0'); // res가 string이기 때문에 '0'에서 나머지만큼 아스키코드값을 더한 값을 출력
		else
			res += (char)(tmp -10 + 'A'); // 나머지가 10 이상일 경우 A부터 표기를 시작함			

		N /= B;
	}
	reverse(res.begin(), res.end()); // reverse 함수를 쓰기 위해서 algorithm 포함
	cout << res;
}