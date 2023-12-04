#include <iostream>
#include <set>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt = 0;
	set<string> s;
	while (N--) {
		string str;
		cin >> str;
		if (str == "ENTER") {
			cnt += s.size();
			s.clear();
		}
		else
			s.insert(str);
	}
	cnt += s.size();
	cout << cnt;
	return 0;
}