#include <iostream>
using namespace std;

int GCD(long long int a, long long int b) {
	int r;
	while (b != 0) {
		r = a % b;
		a = b;
		b = r;
	}
	return a;
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long int a, b;
	cin >> a >> b;
	cout << a * b / GCD(a, b);
	return 0;
}