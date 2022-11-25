#include <stdio.h>

int main() {
	int N;
	int arr[100];
	int result = 0;
	int cnt = 0;;

	scanf("%d", &N);

	for (int i = 0; i < N; i++) {
		scanf("%d", arr+i);
	}

	for (int i = 0; i < N; i++) {
		for (int j = 1; j <= arr[i]; j++) {
			if (arr[i]%j == 0) {
				cnt++;
			}
		}
		if (cnt == 2) {
			result++;
		}
		cnt = 0;
	}

	printf("%d", result);

	return 0;
}