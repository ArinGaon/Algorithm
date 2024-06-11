#include <iostream>
#include <algorithm>
using namespace std;

int arr[100010] = { 0, };
int res[200020] = { 0, };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m, tmp;
	cin >> n >> m;
	int sum = 0;
	int maxnum = -2147483647;
	for (int i = 1; i <= n; i++) {
		cin >> arr[i];
		sum += arr[i];
		res[i] = sum;
	}
	tmp = res[m];
	maxnum = max(maxnum, tmp);
	for (int i = m+1; i <= n; i++) {
		tmp = res[i] - res[i-m];
		maxnum = max(maxnum, tmp);
	}


	cout << maxnum << "\n";
	return 0;
}