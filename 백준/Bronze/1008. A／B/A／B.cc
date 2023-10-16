#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);

	double a, b;
	cin >> a >> b;
	cout << setprecision(10);
	cout << a / b;
}