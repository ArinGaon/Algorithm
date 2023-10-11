#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n;	
	int arr[100001];

	while (1) {
		cin >> n;
		int tmp = 0;
		int cnt = 0;
		string res("");
		if (n == -1)
			break;
		for (int i = 1; i < n; i++) {
			if (n % i == 0) {
				tmp += i;
				res = res + to_string(i) + (string)" + ";
				cnt++;
			}
		}
		res.erase(res.length() - 3, res.length());
		if (tmp == n)
			cout << n << " = " << res << endl;
		else
			cout << n << " is NOT perfect." << endl;
	}

	return 0;
}