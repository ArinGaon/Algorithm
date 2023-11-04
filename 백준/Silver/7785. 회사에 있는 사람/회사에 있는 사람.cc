#include <iostream>
#include <set>

using namespace std;

int main() {
	ios_base::sync_with_stdio;
	cin.tie(NULL);
	cout.tie(NULL);

	int n;
	cin >> n;
	multiset<string> s; // map과 달리 set은 자동정렬됨 multiset을 사용한 이유는 중복을 허용해야하기 때문
	string name, EL; // EL : Enter or Leave

	for (int i = 0; i < n; i++) {
		cin >> name >> EL;
		if (EL == "enter") // EL이 enter면 삽입
			s.insert(name);
		else // leave면 삭제
			s.erase(name);
	}
	for (auto it = s.rbegin(); it != s.rend(); it++)
		cout << *it << "\n";
	return 0;
}