// 25206번 너의 평점은
#include <iostream>

using namespace std;

int main() {
	string name, grade;
	double score;

	double sum = 0.0;
	double temp;
	double res = 0.0;

	for (int i = 0; i < 20; i++) { // 20줄을 입력받음
		cin >> name >> score >> grade;
		if (grade == "P") continue; // 등급이 P일경우 계산에 넣지 않으므로 continue;

		sum += score;
		if (grade == "F") continue; // 등급이 F일경우 0점이므로 continue;

		// 등급에 따라 점수를 temp값에 넣고
		if (grade[0] == 'A') temp = 4;
		else if (grade[0] == 'B') temp = 3;
			else if (grade[0] == 'C') temp = 2;
				else temp = 1;

		if (grade[1] == '+') temp += 0.5; // 등급+의 경우 0.5점을 더함

		res += score * temp; // 총합을 구하고
	}
	cout << res / sum; // 출력은 나누어서

	return 0;
}