#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
	int N;
	int cnt = 0;
	unordered_map<string, bool> hm;
	string str1, str2;
	cin >> N;
	while (N--) {
		cin >> str1 >> str2;

		if (str1 == "ChongChong")
			hm.insert({ str1, true });
		else if (str2 == "ChongChong")
			hm.insert({ str2, true });

		if (hm[str1])
			hm[str2] = true;
		if (hm[str2])
			hm[str1] = true;
	}
	for (auto p : hm) {
		if (p.second)
			cnt++;
	}
	cout << cnt;
}
