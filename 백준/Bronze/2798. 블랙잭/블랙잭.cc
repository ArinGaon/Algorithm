#include <iostream>

using namespace std;
int main() {
	int N, M;
	int res = 0;
	int sum = 0;

	cin >> N >> M;

	int* arr = new int[N];

	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	for (int p = 0; p < N; p++) {
		for (int q = p+1; q < N-1; q++) {
			for (int r = q+1; r < N; r++) {
					sum = arr[p] + arr[q] + arr[r];
				if (sum > res && sum <= M) res = sum; 
			}
		}
	}
	
	cout << res << endl;
	return 0;
}
