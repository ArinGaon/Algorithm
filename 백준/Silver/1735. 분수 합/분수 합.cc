#include <iostream>

using namespace std;

int LCM(int a, int b) { // 최소공배수를 구하는 함수
	int res, tmp;
	tmp = a * b;
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	res = tmp / a;
	return res;
}
int GCD(int a, int b) { // 최대공약수를 구하는 함수
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}
int main() {
	int num1, num2, den1, den2; // num : 분자, den : 분모
	int res_num, res_den;
	int tmpr;
	cin >> num1 >> den1; // 첫 번째 분수
	cin >> num2 >> den2; // 두 번째 분수
	res_den = LCM(den1, den2); // 분모의 최소 공배수가 결과의 분모가 되고
	res_num = num1 * (res_den / den1) + num2 * (res_den / den2); // 분자를 계산

	while (1) { // 기약분수는 분모와 분자의 최대공약수가 1이므로 1이 될때까지
		tmpr = GCD(res_num, res_den);
		if (tmpr == 1)
			break;
		res_num /= tmpr;
		res_den /= tmpr;		
	}
	cout << res_num << " " << res_den;
	return 0;
}