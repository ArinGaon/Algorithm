#include <iostream>
#include <algorithm>
using namespace std;
#define maxnum 1010
int arr[maxnum] = { 0, }; // 원 배열(수열)
int dp[maxnum] = { 1, }; // 배열의 길이를 저장할 dp

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;

	for (int i = 1; i <= n; ++i) {
		cin >> arr[i];
	}

	for (int i = 1; i <= n; ++i) {
		dp[i] = 1; // 최대의 길이가 자기자신인 1의 길이를 가지는 경우가 있기에 길이값을 1로 둠
		for (int j = 1; j <= i; ++j) {
			if (arr[i] > arr[j]) {
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}
	}

	sort(dp, dp + n + 1);
	cout << dp[n] << "\n";

	return 0;
}