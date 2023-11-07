#include <iostream>
#include <set>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string s;
	cin >> s;

	set<string> set; // set 컨테이너는 중복을 허용하지 않음.

	string str = "";
	for (int i = 0; i < s.size(); i++) {
		for (int j = i; j < s.size(); j++) {
			str += s[j]; // str = str + s[j] 
			set.insert(str); // 계산되는 str마다 set에 저장 (중복은 허용하지 않음)
		}
		str = ""; // set에 저장한 후에는 다시 str을 공백으로 초기화
	}
	cout << set.size(); // set에 저장된 원소의 개수가 부분 문자열의 개수
}