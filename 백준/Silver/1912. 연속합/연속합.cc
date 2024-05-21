#include <iostream>
using namespace std;

int arr[100001];
long long savearr[100001];
int n;

int max(int a, int b) {
	if (a > b) 
		return a;
	return b;
}

int main() {
	int res;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
	}

	res = arr[0];
	savearr[0] = arr[0];

	for (int i = 1; i < n; ++i) {
		savearr[i] = max(savearr[i - 1] + arr[i], arr[i]);
		res = max(savearr[i], res);
	}

	cout << res << "\n";
	return 0;
}