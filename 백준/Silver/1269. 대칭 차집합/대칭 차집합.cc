#include <iostream>
#include <map>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	map<int, int> m;
	int cnt = 0;
	for (int i = 0; i < a + b; i++) {
		int num;
		cin >> num;
		m[num]++;
	}
	
	for (auto o = m.begin(); o != m.end(); o++ ) {
		if (o->second == 1)
			cnt++;
	}
	cout << cnt;
	return 0;
}