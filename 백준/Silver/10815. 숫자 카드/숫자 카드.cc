#include <iostream>
#include <algorithm>
// goto 문을 이용해 구현하였으나 시간초과가 뜸, 이분탐색으로 풀어야함

using namespace std;
int res[500001] = { 0 };

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int N;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}

	int M;
	cin >> M;
	int* arr2 = new int[M];
	for(int i=0;i<M;i++){
		cin >> arr2[i];
	}

	sort(arr, arr + N);
	for (int i = 0; i < M; i++) {
		int right = N - 1;
		int left = 0;
		while (left <= right) {
			int mid = (right + left) / 2;
			if (arr[mid] == arr2[i]) {
				res[i] = 1;
				break;
			}
			if (arr[mid] > arr2[i]) {
				right = mid - 1;
			}
			else
				left = mid + 1;
		}
	}
	for (int i = 0; i < M; i++) {
		cout << res[i] << " ";
	}
	return 0;
}