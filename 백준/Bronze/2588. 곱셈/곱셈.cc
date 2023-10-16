#include <iostream>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int a, b;
	cin >> a >> b;
	int res =a*b;
	while (b>0) {
		cout << a * (b % 10) << endl;
		b /= 10;
	}
	cout << res;
	return 0;
}