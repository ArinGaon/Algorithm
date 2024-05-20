#include <iostream>
using namespace std;

int savearr[21][21][21];

int func(int a, int b, int c) {
	if (a <= 0 || b <= 0 || c <= 0) {
		return 1;
	}
	if (a > 20 || b > 20 || c > 20) {
		return func(20, 20, 20);
	}
	if (savearr[a][b][c]) {
		return savearr[a][b][c];
	}
	if (a < b && b < c) {
		savearr[a][b][c] = func(a, b, c - 1) + func(a, b - 1, c - 1) - func(a, b - 1, c);
		return savearr[a][b][c];
	}
	
	savearr[a][b][c] = func(a - 1, b, c) + func(a - 1, b - 1, c) + func(a - 1, b, c - 1) - func(a - 1, b - 1, c - 1);
	return savearr[a][b][c];
}

int main() {
	int a,b,c;
	while (1) {
		cin >> a >> b >> c;
		if (a == -1 && b == -1 && c == -1)
			break;
		cout << "w(" << a << ", " << b << ", " << c << ") = " << func(a, b, c) << "\n";
	}
	return 0;
}