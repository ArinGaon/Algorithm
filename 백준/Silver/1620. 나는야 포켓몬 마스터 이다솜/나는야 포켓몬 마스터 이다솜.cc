#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int N, M;
	cin >> N >> M;
	string pokemonname[100000];
	map<string, int> pokemon;
	string inputstr;
	int inputnum;

	for (int i = 0; i < N; i++) {
		cin >> pokemonname[i];
		pokemon.insert(make_pair(pokemonname[i], i));
	}
	
	for (int i = 0; i < M; i++) {
		cin >> inputstr;
		if (isdigit(inputstr[0]) != 0) { // isdigit() 함수 내의 변수가 문자가 숫자인지를 판별하는 함수
			inputnum = stoi(inputstr) - 1; // stoi -> string to integer
			cout << pokemonname[inputnum] << "\n";
		}
		else {
			auto tmp = pokemon.find(inputstr);
			cout << tmp->second + 1 << "\n"; 
		}
	}

	return 0;
}