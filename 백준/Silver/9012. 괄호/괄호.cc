#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	ios::sync_with_stdio();
	cin.tie(NULL);
	cout.tie(NULL);

	int k;
	cin >> k;

	while (k--) {
		// 괄호를 입력받을 문자열 parstr
		string parstr;
		cin >> parstr;
		// 괄호가 ()가 완성되면 pop하는 stack st 선언
		stack<char> st;
		string answer = "YES";
		for (int i = 0; i < parstr.length(); i++) {
			// '('은 스택에 저장하고.
			if (parstr[i] == '(') 
				st.push(parstr[i]);
			// ')'가 나오면 스택에 저장된 '('와 짝이 맞는지 확인하고 pop;
			else if (!st.empty() && parstr[i] == ')' && st.top() == '(')
				st.pop(); 
			// 둘다 아닐 경우, 모두 vps가 아닌 상황이므로 break;
			else {
				answer = "NO";
				break;
			}
		}
		// 짝이 안맞을 경우 '('가 모두 pop되지 않기 때문에
		// 스택이 empty가 될 수 없음. 이 경우 answer은 NO;
		if (!st.empty()) answer = "NO";
		cout << answer << endl;
	}
	return 0;
}