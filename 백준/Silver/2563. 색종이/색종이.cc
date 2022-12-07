#include <iostream>
using namespace std;
// 도화지 크기가 100이므로 0~100 전역변수 101 및 이차원 배열 선언
const int SIZE = 100+1;
int arr[SIZE][SIZE];

int main() {
	int num;
	cin >> num;
	// 색종이를 붙이는 부분을 1로 정함
	for (int p = 0; p < num; p++) {
		int a, b;
		cin >> a >> b;
		for (int i = b+1; i <= b + 10; i++) {
			for (int j = a+1; j <= a + 10; j++) {
				arr[i][j] = 1;
			}
		}				
	}
	// 1의 갯수가 곧 색종이를 붙인 부분의 넓이이므로 1의 갯수를 센다
	int cnt = 0;
	for (int i = 1; i < SIZE; i++) 
		for (int j = 1; j < SIZE; j++) 
			if (arr[i][j])
				cnt++;
		
	cout << cnt << endl;
	return 0;
}