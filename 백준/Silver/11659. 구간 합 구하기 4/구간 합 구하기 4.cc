#include <iostream>

using namespace std;

int arr[100010] = { 0, }; // 숫자를 입력받을 배열

int res[100010] = { 0, }; // 누적합을 저장할 배열

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n, m;
	cin >> n >> m;
	int sum = 0;

	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		sum += arr[i];
		res[i] = sum;
	}

	for (int i = 0; i < m; i++) {
		int a, b;
		cin >> a >> b;
		cout << res[b-1] - res[a-1] + arr[a-1] << "\n";
	}

	return 0;
}