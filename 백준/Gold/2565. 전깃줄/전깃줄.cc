#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

#define MAXNUM 505
vector<pair<int, int>> v;
int arr[MAXNUM] = { 0, };
int dp[MAXNUM] = { 0, };

int main() {
	ios::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	int res = 0, cnt = 0;
	int maxnum = 0;
	cin >> n;

	for (int i = 0; i < n; i++) {
		int a, b;
		cin >> a >> b;
		v.push_back(make_pair(a, b));
		cnt++;
	}
	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++) {
		arr[i] = v[i].second;
	}
	for (int i = 0; i < n; i++) {
		dp[i] = 1;
		for (int j = 0; j < i; j++) {
			if (arr[i] > arr[j])
				dp[i] = max(dp[i], dp[j] + 1);
		}
	}
	for (int i = 0; i < n; i++) {
		maxnum = max(maxnum, dp[i]);
	}

	res =  cnt - maxnum;
	cout << res << "\n";	

	return 0;
}