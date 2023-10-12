	#include <iostream>
	using namespace std;

	int main() {
		int n;
		cin >> n;
		int x, y;
		int max_x = -10001, max_y = -10001, min_x = 10001, min_y = 10001;

		while (n > 0) {
			cin >> x >> y;
			if (x > max_x) max_x = x;
			if (y > max_y) max_y = y;
			if (x < min_x) min_x = x;
			if (y < min_y) min_y = y;
			n--;
		}
		cout << (max_x - min_x) * (max_y - min_y);
		return 0;
	}