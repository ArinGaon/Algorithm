#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define MAXNUM 1010

int arr[MAXNUM] = { 0, };
int dp[MAXNUM] = { 0, }; // 증가수열
int reverse_dp[MAXNUM] = { 0, }; // 감소수열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	// 증가수열
	for (int i = 1; i <= n; ++i) {
		dp[i] = 1;
		for (int j = 1; j <= i; ++j) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}
	// 감소수열
	for (int i = n; i >= 1; --i) {
		reverse_dp[i] = 1;
		for (int j = n; j >= i; --j) {
			if (arr[i] > arr[j])
				reverse_dp[i] = max(reverse_dp[i], reverse_dp[j] + 1);
		}
	}
	int res = 0; // 증가수열 + 감소수열 -1 = 바이토닉 수열 최댓값
	for (int i = 1; i <= n; ++i) {
		res = max(res, dp[i] + reverse_dp[i] - 1);
	}
	cout << res << "\n";
	return 0;
}
