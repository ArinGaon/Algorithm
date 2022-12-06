#include <iostream>
using namespace std;

int arr[250000];
int num;

int main() {
	while (1) {
		int cnt = 0;
		cin >> num;
		for (int i = 0; i <= num * 2; i++) {
			arr[i] = 0;
		}
		if (num == 0)
			break;
		for (int i = 2; i <= num * 2; i++) {
			if (arr[i] == 0) {
				arr[i] = 0;
			}
			for (int j = i + i; j <= num * 2; j += i) {
				if (arr[j] != 1) {
					arr[j] = 1;
				}
			}
		}
		for (int i = num + 1; i <= num * 2; i++) {
			if (arr[i] == 0) {
				cnt++;
			}
		}
		cout << cnt << endl;
	}
}