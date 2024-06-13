#include <iostream>
using namespace std;
// 구간이 m으로 나누어 떨어진다는 것은 
/*
 부분합 배열구간 (i,j)에서
 (res[j] - res[i]) % m == 0; 이라는 이야기이고 이는 곧
 (res[j] % m ) = (res[i] % m) 이라는 이야기 -> modular 공식
*/
long long modular[1010]; // modular 연산을 수행할 배열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, tmp;
	cin >> n >> m;
	long long count = 0; // 숫
	long long sum = 0;

	for (int i = 1; i <= n; i++) {
		cin >> tmp; 
		sum += tmp;
		modular[sum % m]++;
	}

	for(int i=0; i<=m; i++)
		count += ((modular[i] * (modular[i] - 1)) / 2);

	cout << modular[0] + count << "\n"; // modular 합이 0인 부분은 구간에 포함되므로 0인 부분을 +
	return 0;
}