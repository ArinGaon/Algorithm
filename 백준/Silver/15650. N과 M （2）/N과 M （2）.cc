// DFS : 상태공간을 나타낸 트리에서 바닥에 도달할 때까지 한 쪽 방향으로만 내려가는 방식
#include <iostream>
#include <algorithm>

using namespace std;
#define MAX 9

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

// 백트래킹 알고리즘이라고 보면 됨
void dfs(int num, int cnt) {
	if (cnt == M) { // cnt값이 목표값인 M개까지 도달하면 
		for (int i = 0; i < M; i++) // arr에 저장한 값 M개만큼 출력
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	// 목표값에 도달하지 않았으면
	for (int i = num; i <= N; i++) { 
		if (!visited[i]) {
			visited[i] = true; 
			arr[cnt] = i; 
			dfs(i+1, cnt + 1); 
			visited[i] = false; 
		}
	}
}

int main() {
	cin >> N >> M;
	dfs(1, 0);
	return 0;
}