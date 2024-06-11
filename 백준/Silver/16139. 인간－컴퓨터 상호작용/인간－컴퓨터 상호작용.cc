#include <iostream>
#include <string>
using namespace std;

string mainstring;         // 문자열

int find_alphabet(char alphabet, int l, int r) {
	int res[200020] = { 0, };
	if (alphabet == mainstring[0])
		res[0] = 1;
	for (int i = 1; i < mainstring.length(); i++) {
		if (alphabet == mainstring[i])
			res[i] = res[i - 1] + 1;
		else
			res[i] = res[i - 1];
	}
	int result;
	if (l == 0)
		return res[r];
	else
		return res[r] - res[l - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> mainstring;
	int n, result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char alphabet;
		cin >> alphabet;
		int l, r;
		cin >> l >> r;
		result = find_alphabet(alphabet, l, r);
		cout << result << "\n";
	}

	return 0;
}