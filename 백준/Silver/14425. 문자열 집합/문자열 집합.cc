#include <iostream>
#include <map>

using namespace std;

int main() {
	int n, m;
	cin >> n >> m;
	map<string, bool> map; // map을 선언하고
	string str;
	int result = 0;

	for (int i = 0; i < n; i++) {
		cin >> str;
		map.insert(pair<string, bool>(str, true)); // n개의 문자열을 입력받아서 map에 true로 저장
	}

	for (int i = 0; i < m; i++) {
		cin >> str;
		if (map[str] == true)
			result++;
	} // m개의 문자열만큼 입력받고 true 값이라면 result++
	cout << result;
}