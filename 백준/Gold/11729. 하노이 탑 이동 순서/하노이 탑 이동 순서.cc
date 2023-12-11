#include <iostream>
#include <cmath>
using namespace std;
int cnt = 0;

void move(int from, int to) {
	cout << from << " " << to << "\n";
	cnt++;
}

void hanoi(int n, int from, int by, int to) {
	if (n == 0) return;
	hanoi(n - 1, from, to, by);
	move(from, to);
	hanoi(n - 1, by, from, to);
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	cout << (int)pow(2, N) -1 << "\n";
	hanoi(N,1,2,3);

	return 0;
}