#include <iostream>
using namespace std;
#define MAX 8

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

void dfs(int num, int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M; i++) {
			cout << arr[i] << " ";
		}
		cout << '\n';
		return;
	}
		
	for (int i = num; i <= N; i++) {
			visited[i] = true;
			arr[cnt] = i;
			dfs(i, cnt + 1);
			visited[i] = false;
		
	}
}

int main() {
	cin >> N >> M;
	dfs(1, 0);
	return 0;
}