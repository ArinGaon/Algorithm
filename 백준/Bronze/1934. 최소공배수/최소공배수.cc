#include <iostream>
#include <vector>


using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int num;
	cin >> num;
	int a, b, tmp, tmp2, res;
	vector<int> v;
	// 유클리드 호제법에 따라 최대공약수를 먼저 구하고
	// 최소공배수는 두수의 곱을 최대공약수로 나눈 값이라는 계산식을 적용
	for (int i = 0; i < num; i++) {
		cin >> a >> b;
		tmp2 = a * b;
		while (b != 0) {
			tmp = a % b;
			a = b;
			b = tmp;
		}
		res = tmp2 / a;
		v.push_back(res);
	}
	for (auto i : v)
		cout << i << endl;
}