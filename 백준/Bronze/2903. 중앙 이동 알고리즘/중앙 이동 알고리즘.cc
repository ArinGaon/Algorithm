// 2903번 중앙이동 알고리즘
#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int N;
	cin >> N;
	int tmp = 2;

	while (N--) {
		tmp += (tmp - 1);
	}
	cout << tmp * tmp;
	return 0;
}