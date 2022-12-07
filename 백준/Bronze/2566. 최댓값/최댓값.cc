#include <iostream>
using namespace std;

int main() {
	int arr[9][9];
	int max = 0;
	int a, b;

	for (int i = 0; i < 9; i++) {
		for (int j = 0; j < 9; j++) {
			cin >> arr[i][j];
			if (arr[i][j] >= max) {
				max = arr[i][j];
				a = i;
				b = j;
			}
		}
	}
	cout << max << "\n" << a + 1 << " " << b + 1 << endl;
	
}