#include <stdio.h>

int main() {
	int M, N;
	int arr[10000];
	int cnt = 0;
	int result = 0;
	int min;

	scanf("%d", &M);
	scanf("%d", &N);

	for (int i = 0; i <= N-M; i++) {
		arr[i] = M+i;
	}
	for (int i = 0; i <= N - M ; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			if (arr[i] % j == 0)
				cnt++;
		}
		if (cnt == 2) {
			result += arr[i];
			if (arr[i] == result) {
				min = arr[i];
			}
		}
		cnt = 0;
	}
	if (result == 0) {
		printf("-1");
	}
	else {
		printf("%d\n", result);
		printf("%d", min);
	}


	return 0;
}