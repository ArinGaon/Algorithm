#include <iostream>
#include <vector>
using namespace std;

int n;
vector<long long> solve = { 0,1,2 };

void find_answer() {
	long long tmp;
	for (int i = 3; i <= n; i++) {
		tmp = 0;
		tmp = solve[i - 1] + solve[i - 2];
		solve.push_back(tmp % 15746);
	}
}

int main() {
	cin >> n;
	find_answer();
	cout << solve[n] % 15746;
}