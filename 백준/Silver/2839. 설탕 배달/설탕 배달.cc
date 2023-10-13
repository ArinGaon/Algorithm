#include <iostream>

using namespace std;

int sum(int num) {
	int a, b = 0;
	int result;

	a = num / 5;

	if ((num % 5) % 3 == 0) {
		b = (num % 5) / 3;
	}
	else if ((num % 5) % 3 == 1) {
		if (a - 1 >= 0) {
			a = a - 1;
			b = (num % 5) / 3 + 2;
		}
		else
			return -1;
	}
	else if ((num % 5) % 3 == 2) {
		if (a - 2 >= 0) {
			a = a - 2;
			b = (num % 5) / 3 + 4;
		}
		else 
			return -1;
	}

	result = a + b;
	return result;
}

int main() {
	int num, result;
	cin >> num;
	result = sum(num);
	cout << result << endl;
}