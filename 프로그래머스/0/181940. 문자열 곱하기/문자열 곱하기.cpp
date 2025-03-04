#include <string>
#include <vector>

using namespace std;

string solution(string my_string, int k) {
    string answer = "";
    
    for(int i = 0; i < k; i++){
        answer.append(my_string); // append : 문자열 추가
    }
    return answer;
}