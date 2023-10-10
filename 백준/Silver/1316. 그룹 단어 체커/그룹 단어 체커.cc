// 1316번 그룹단어 체커
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int num;
	string word;
	int cnt = 0;

	cin >> num;
	for (int i = 0; i < num; i++) {
		cin >> word;

		bool alphabet[26] = { false, }; // word에서 알파벳이 출현하지 않으면 false
		alphabet[(int)(word[0]) - 97] = true; // 알파벳 소문자의 아스키 코드는 97번 부터 시작해서 첫 단어를 0바꾸고 true로 변경

		for (int i = 1; i < word.size(); i++) {
			// i번째 문자가 i-1번째 문자와 같으면 연속이므로 continue;
			if (word[i] == word[i - 1]) {
				continue;
			}
			// i번째 문자가 i-1번째 문자와 같지 않고, 해당 배열값이 true라면 그룹단어가 아니므로 cnt++후 break;
			else if (word[i] != word[i - 1] && alphabet[(int)(word[i]) - 97] == true) {
				cnt++;
				break;
			}
			// 위의 두 경우에 해당하지 않는 경우
			else
				alphabet[(int)(word[i]) - 97] = true;
		}
	}
	// 그룹단어의 개수 = 전체 단어의 개수 - 그룹단어가 아닌 개수
	cout << num - cnt;
}