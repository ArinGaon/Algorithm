#include <iostream>

using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int num;
	cin >> num;

	if (num % 4 == 0) {
		if (num % 400 == 0)
			cout << "1" << endl;
		else if (num % 100 == 0)
			cout << "0" << endl;
		else
			cout << "1" << endl;
	}
	else
		cout << "0" << endl;

	return 0;
}