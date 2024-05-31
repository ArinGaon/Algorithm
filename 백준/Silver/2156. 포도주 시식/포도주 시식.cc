#include <iostream>
#include <algorithm>
using namespace std;

#define GLASS 10001
int dp[GLASS] = { 0, };
int arr[GLASS] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int res = 0;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	dp[1] = arr[1];
	dp[2] = dp[1] + arr[2];
	for (int i = 3; i <= n; ++i) {
		dp[i] = max(dp[i - 3] + arr[i - 1] + arr[i], dp[i - 2] + arr[i]);
		dp[i] = max(dp[i - 1], dp[i]);
	}
	cout << dp[n] << "\n";
	return 0;
}
