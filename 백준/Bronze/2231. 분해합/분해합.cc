#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N, num;
	cin >> N;
	int tmp2 =0;
	int* arr = new int[N];
	
	for (int p = 1; p < N; p++) {
		int num = p;
		int tmp = 0;
		while (num !=0) {
			tmp += (num % 10);
			num /= 10;
		}
		if (tmp + p == N) {
			arr[tmp2] = p;
			tmp2++;
		}
	}
	cout << arr[0] << endl;
	return 0;
}
