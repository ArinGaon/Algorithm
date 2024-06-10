#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
#define max_weight 100010
#define max_num 110

vector<pair<int, int>> product; // first : 무게, second : 가치
int dp[max_num][max_weight] = { 0,0, }; // dp[i][w] = k ( i = i번째 물건, w = 무게, k= 최대가치

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int maxvalue = 0;
	int num, maxweight;
	cin >> num >> maxweight;

	product.push_back({ 0,0 }); // 초기값 0으로 초기화하고
	for (int i = 0; i < num; i++) { // v[i] => 1부터 대입
		int wei, val;
		cin >> wei >> val;
		product.push_back(make_pair(wei, val));
	}
	
	for (int i = 1; i <= num; i++) {
		for (int j = 1; j <= maxweight; j++) {
			if (j - product[i].first >= 0) {
				// dp[i][product[i].first] = product[i].second;
				dp[i][j] = max(dp[i - 1][j - product[i].first] + product[i].second, dp[i - 1][j]);
				maxvalue = max(maxvalue, dp[i][j]);
			}
			else {
				dp[i][j] = dp[i - 1][j];
				maxvalue = max(maxvalue, dp[i][j]);
			}
		}
	}

	cout << maxvalue << "\n";

	return 0;
}