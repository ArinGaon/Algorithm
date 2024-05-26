#include <iostream>
using namespace std;

// dp[i][j] => i자리의 숫자중에서 끝자리 숫자가 j인 경우
int dp[101][10] = { 0, 0 };
	
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	for (int i = 1; i < 10; ++i) {
		dp[1][i] = 1;
	}
	for (int i = 2; i <= n; ++i) {
		for (int j = 0; j < 10; ++j) {
			if (j == 0) // 끝자리가 0인 경우 1인 경우 한개로 고정됨
				dp[i][0] = dp[i - 1][j + 1];
			else if (j == 9) // 끝자리가 9인 경우 8인 경우 한개로 고정됨
				dp[i][9] = dp[i - 1][j - 1];
			else // 그 밖의 일반적인 경우
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];

			dp[i][j] %= 1000000000;
		}
	}
	int res = 0;
	for (int i = 0; i < 10; ++i) {
		res = (res + dp[n][i]) % 1000000000;
	}
	cout << res << "\n";
}