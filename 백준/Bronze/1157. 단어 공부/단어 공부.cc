#include <iostream>
#include <cstring>

char a[1000000];
int arr[26];

int main() {
	int max = 0;
	int size;
	char res;

	std::cin >> a; // 배열에 입력을 받고
	size = strlen(a); // size 변수에 배열의 크기 대입

	for (int i = 0; i < size; i++) { // size 크기만큼
		if (a[i] >= 'a')
			arr[a[i] - 'a']++; // 소문자 횟수
		else
			arr[a[i] - 'A']++; // 대문자 횟수 (소문자와 같은 문자일 경우 동일한 수로 저장됨)
	}

	for (int i = 0; i < 26; i++) {
		if (arr[i] == max) // 0부터 시작이지만 else if 문에 따라 변경된 max값이 중복될 경우 ? 출력
			res = '?';
		else if (arr[i] > max) {
			max = arr[i];
			res = 'A' + i; // 문제 조건에 알파벳을 대문자로 출력
		}
	}
	std::cout << res;

	return 0;
}
