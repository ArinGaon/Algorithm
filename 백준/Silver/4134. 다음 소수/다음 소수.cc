#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

bool prime_number(long long a) {
	if (a < 2)
		return false;
	else if (a == 2)
		return true;
	else if (a > 2) {
		for (int i = 2; i <= sqrt(a); i++) { // sqrt(a)대신 그냥 a만 쓰면 시간복잡도가 O(n)이 되어버려 시간초과 발생
			if (a % i == 0)
				return false;
		}
		return true;
	}
}


int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	long long num;

	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> num;
		while (1) {
			if (prime_number(num) == 1) {
				cout << num << "\n";
				break;
			}
			else
				num++;
		}
	}

	return 0;
}