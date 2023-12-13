// DFS : 상태공간을 나타낸 트리에서 바닥에 도달할 때까지 한 쪽 방향으로만 내려가는 방식
#include <iostream>
using namespace std;
#define MAX 9

int N, M;
int arr[MAX] = { 0, };
bool visited[MAX] = { 0, };

// 백트래킹 알고리즘이라고 보면 됨
void dfs(int cnt) {
	if (cnt == M) { // cnt값이 목표값인 M개까지 도달하면 
		for (int i = 0; i < M; i++) // arr에 저장한 값 M개만큼 출력
			cout << arr[i] << ' ';
		cout << '\n';
		return;
	}
	// 목표값에 도달하지 않았으면
	for (int i = 1; i <= N; i++) { 
		if (!visited[i]) { // visited[i] = false 라면
			visited[i] = true; // true로 바꾸고
			arr[cnt] = i; // arr에 i를 대입한 후
			dfs(cnt + 1); // 변수 cnt값을 1 증가시켜서 재귀
			visited[i] = false; // 백트래킹
		}
	}
}

int main() {
	cin >> N >> M;
	dfs(0);
	return 0;
}