#include <iostream>
#include <unordered_map>
#include <vector>
#include <algorithm>
using namespace std;

unordered_map <string, int> um;

bool comp(pair<string, int> &a, pair<string,int> &b){
	if (a.second == b.second) { // 단어의 출현횟수(?)가 같고
		if (a.first.length() == b.first.length()) // 길이마저 같다면
			return a.first < b.first; // a.first < b.first
		return a.first.length() > b.first.length(); // 길이가 다르다면 단어의 길이 비교해서 t/f 반환
	}
	return a.second > b.second; // 출현횟수가 다르다면 출현횟수 비교해서 t/f 반환
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;
	while (N--) {
		string str;
		cin >> str;
		if (str.length() >= M)
			um[str]++;
	}
	vector<pair<string, int>> v(um.begin(), um.end());
	sort(v.begin(), v.end(), comp); // sort의 기본정렬은 오름차순이지만 bool형식의 comp함수를 선언해서 세번째 인자로 넣음으로서 해당 함수의 반환값에 맞게 정렬이 동작
	for (auto p : v)
		cout << p.first << "\n";
	
	return 0;

}