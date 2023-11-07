#include <iostream>
#include <unordered_map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);

	unordered_map <int, int> m;
	int N, M, card;
	cin >> N;

	for (int i = 0; i < N; i++) {
		cin >> card;
		m[card]++;
	}
	cin >> M;
	for (int i = 0; i < M; i++) {
		cin >> card;
		cout << m[card] << " ";
	}
	return 0;
}

/* 처음에 이 방식으로 했다 시간초과 뜸
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
;
	unordered_map<int, int> card; 
	unordered_map<int, int> result; 
	int n, m;
	int num;
	cin >> n;

	for (int i = 0; i < n; i++) {
		cin >> num;
		card.insert(make_pair(i, num)); 
	}
	cin >> m;
	for (int i = 0; i < m; i++) {
		int cnt = 0;
		int tmp;
		cin >> tmp;
		for (int j = 0; j < n; j++) {
			auto im = card.find(j);
			if (tmp == im->second)
				cnt++;
		}
		result.insert(make_pair(i, cnt));
	}

	for (int i = 0; i < m; i++) {
		auto it = result.find(i);
		cout << it->second << " ";
	}

	return 0;
}
*/