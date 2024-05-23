#include <iostream>
#include <algorithm>

using namespace std;

int dp[301] = { 0, };
int arr[301] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	// 계단의 갯수
	int n; 
	cin >> n;

	// 계단의 점수 입력
	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}
	// N번째 계단의 최댓값은 크게 두가지 중 하나임
	// N-2번째 계단까지의 최댓값 + N번쨰 계단의 점수 vs
	// N-3번째 계단까지의 최댓값 + N-1번째 계단의 점수 + N번째 계단의 점수
	dp[0] = arr[0]; // 1번계단
	dp[1] = arr[1]; // 2번계단
	dp[2] = max(arr[0] + arr[2], arr[1] + arr[2]);
	for (int i = 3; i <= n; ++i) {
		dp[i] = max(dp[i - 2] + arr[i], dp[i - 3] + arr[i-1] + arr[i]);
	}
	cout << dp[n];
	return 0;
}