#include <iostream>
#include <vector>
using namespace std;

int n;
long long savearr[102] = { 0 }; // 모든 배열의 값을 0으로 지정 

long long Padovan(int n) { 
	// 문제에서 n=1부터 시작이라고 했으니 1,2,3을 1로 초기화
	savearr[1] = 1;
	savearr[2] = 1;
	savearr[3] = 1;
	if (n < 4)
		return savearr[n];
	else {
		if(savearr[n] ==0) // 만약 배열의 값이 비어있다면
			savearr[n] = Padovan(n - 2) + Padovan(n - 3);
		return savearr[n];
	}
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int times;
	cin >> times;
	while (1) {
		cin >> n;
		Padovan(n);
		cout << savearr[n] << "\n";
		times--;
		if (times == 0)
			break;
	}
	return 0;
}