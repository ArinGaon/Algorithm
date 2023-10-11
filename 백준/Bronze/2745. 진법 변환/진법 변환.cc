// 2745번 진법 변환
#include <iostream>
#include <string>
#include <cmath>

using namespace std;
int B; // B진법 수
string N; // 인 N을 입력받을 변수
int res;
int cnt = 0;

int main() {
	
	cin >> N >> B;

	for (int i = N.length() - 1; i >= 0; i--) { // N을 string으로 선언하여 문자열의 길이만큼 10진법으로 변환
		if (N[i] >= 'A' && N[i] <= 'Z') // 알파벳이 있다면 아스키코드값 만큼 빼서 10을 더하면 됨
			res += (N[i] - 'A' + 10) * ((int)pow(B, cnt)); // pow함수는 거듭제곱 -> B를 cnt제곱
		else
			res += (N[i] - '0') * ((int)pow(B, cnt)); // 변수를 string으로 받았기 때문에 '0'의 아스키코드값만큼 빼주고 계산
		cnt++;
	}
	cout << res << endl;
	return 0;
}