#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int dp[1010][1010] = { 0,0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	
	string str1, str2;
	cin >> str1;
	cin >> str2;

	// LCS (Longest Common Substring, 최장 공통 부분 수열) 알고리즘
	for (int i = 1; i <= str1.length(); i++) {
		for (int j = 1; j <=str2.length(); j++) {
			if (str1[i - 1] == str2[j - 1]) {
				dp[i][j] = dp[i - 1][j - 1] + 1;
			}
			else
				dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
		}
	}

	cout << dp[str1.length()][str2.length()]; 
	return 0;
}