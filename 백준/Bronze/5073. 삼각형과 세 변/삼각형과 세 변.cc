#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int line[3];

	while (1) {
		for (int i = 0; i < 3; i++) {
			cin >> line[i];
		}
		if (line[0] == 0 && line[0] == line[1] && line[0] == line[2])
			break;
		sort(line, line + 2);
		if (line[2] >= line[0] + line[1])
			cout << "Invalid\n";
		else if (line[0] != line[1] && line[1] != line[2] && line[2] != line[0])
			cout << "Scalene\n";
		else if (line[0] == line[1] && line[1] == line[2])
			cout << "Equilateral\n";
		else
			cout << "Isosceles\n";
	}
	return 0;
}