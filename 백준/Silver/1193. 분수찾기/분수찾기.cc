// 2903번 중앙이동 알고리즘
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int X;
	cin >> X;
	int cnt = 1;
	int tmp = 0;

	while (tmp < X) {
		tmp += cnt;
		cnt++;
	}
	if (cnt % 2 == 1)
		cout << cnt - 1 - (tmp - X) << "/" << 1 + (tmp - X);
	else
		cout << 1 + (tmp - X) << "/" << cnt - 1 - (tmp - X);

	return 0;
}
		