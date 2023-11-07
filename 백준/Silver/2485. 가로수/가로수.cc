#include <iostream>
#include <algorithm>
using namespace std;

int tree[100000];
int tree_distance[100000];

int GCD(int a, int b) {
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

	int n;
	cin >> n;
	int gcd = 0;
	int cnt = 0;
	// 가로수 입력
	for (int i = 0; i < n; i++) {
		cin >> tree[i];
	}

	sort(tree, tree + n); // 가로수들을 정렬
	for (int i = 0; i < n - 1; i++) { // 각 가로수들 사이의 간격들을 계산해서 삽입
		tree_distance[i] = tree[i + 1] - tree[i];
	}
	// 위에 삽입한 가로수 사이의 간격들의 최대공약수 구하기
	gcd = tree_distance[0];
	for (int i = 1; i < n - 1; i++) {
		gcd = GCD(gcd, tree_distance[i]);
	}
	// 가로수 사이의 간격을 위에서 구한 최대공약수로 나누어 몇 개를 추가로 심어야 하는지 계산
	for (int i = 0; i < n - 1; i++) {
		cnt += (tree_distance[i] / gcd) - 1; // 양끝에 하나씩 심어져 있으므로 -1
	}

	cout << cnt;

	return 0;
}