#include <iostream>
#include <string>
#include <vector>
using namespace std;

string mainstring;         // 문자열
int v[26][202020];     

void find_alphabet() {
	int tmp;
	int alpha = 'a';
	for (alpha =0 ; alpha <26; alpha++) {
		tmp = 0;
		if (alpha + 'a' == mainstring[0]) {
			tmp++;
			v[alpha][0] = tmp;
		}
		else
			v[alpha][0] = tmp;

		for (int i = 1; i < mainstring.length(); i++) {
			if (alpha +'a' == mainstring[i]) {
				tmp++;
				v[alpha][i] = tmp;
			}
			else
				v[alpha][i] = tmp;
		}
	}
}

int solution(char alphabet, int l, int r) {
	int alp = alphabet - 'a';
	if (l == 0)
		return v[alp][r];
	else
		return v[alp][r] - v[alp][l - 1];
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> mainstring;
	find_alphabet();

	int n, result;
	cin >> n;
	for (int i = 0; i < n; i++) {
		char alphabet;
		cin >> alphabet;
		int l, r;
		cin >> l >> r;
		result = solution(alphabet, l, r);
		cout << result << "\n";
	}

	return 0;
	/*
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
*/
}