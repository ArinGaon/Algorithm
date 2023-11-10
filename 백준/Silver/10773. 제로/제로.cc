#include <iostream>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int k, num;
	int res = 0;
	stack<int> s;
	cin >> k;
	
	while (k--) {
		cin >> num; 
			if (num == 0) {
				res -= s.top();
				s.pop();
			}		
			else {
			res += num;
			s.push(num);
		}
	}
	cout << res;
	return 0;
}