#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
const int n = 1000000;
vector<bool> primeNum(n + 1);

void isPrime() { // 소수 판별 함수
    primeNum[0] = primeNum[1] = true; // 값이 true 일 경우 소수가 아님
    for (int i = 2; i*i<= n; i++) {
        if (primeNum[i])
            continue;
        for (int j = i * i; j <= n; j += i) {
            primeNum[j] = true; // 에라토스테네스의 체를 통해 소수가 아닌 값을 true로 바꾸며 지워나감
        }
    }
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    isPrime();
    int T; // 반복할 횟수
    int num; // 입력받을 수

    cin >> T;
    while (T--) {
        int cnt = 0;
        cin >> num;
        vector<int> v; // 소수들을 저장할 벡터

        for (int i = 2; i < num; i++) {
            if (!primeNum[i]) // i가 소수라면
                v.push_back(i); // 벡터에 저장
        }
        for (auto it = v.begin(); it != v.end(); ++it) {
            int other = num - *it;
            if (other < *it)
                break;

            if(binary_search(it,v.end(),other)) // binary_search(a, b, c) : a에서 b구간동안 c가 있는지 이진탐색
                cnt++;
        }
        cout << cnt << "\n";
    }
    return 0;
}