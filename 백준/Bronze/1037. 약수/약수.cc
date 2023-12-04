#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int N;
	cin >> N;
	int num;
	vector<int> v;
	while (N--) {
		cin >> num;
		v.push_back(num);
	}
	sort(v.begin(), v.end());
	cout << *v.begin() * *(v.end()-1);

	return 0;
}