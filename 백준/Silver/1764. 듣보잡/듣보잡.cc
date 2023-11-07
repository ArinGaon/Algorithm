#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main() {

	int n, m;
	cin >> n >> m;
	map<string, int> map;
	vector<string> v;
	
	for (int i = 0; i < n + m; i++) {
		string name;
		cin >> name;
		map[name]++;
		if (map[name] > 1)
			v.push_back(name);
	}
	sort(v.begin(), v.end());
	cout << v.size() << "\n";
	for (auto p : v) // 범위기반 for문 
		cout << p << "\n";

	return 0;
}

/* 우씨 이렇게 했더니 또 시간초과 뜸
int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	int n, m;
	cin >> n >> m;
	unordered_map<int, string> no_H; // no Heard
	unordered_map<int, string> no_L; // no Look........
	string name;
	for (int i = 0; i < n; i++) {
		cin >> name;
		no_H.insert(make_pair(i, name));
	}
	for (int i = 0; i < m; i++) {
		cin >> name;
		no_L.insert(make_pair(i, name));
	}
	for (int i = 0; i < n; i++) {
		auto it = no_H.find(i);
		for (int j = 0; j < m; j++) {
			auto im = no_L.find(j);
			if (it->second == im->second)
				cout << it->second << "\n";
		}
	}
}
*/
