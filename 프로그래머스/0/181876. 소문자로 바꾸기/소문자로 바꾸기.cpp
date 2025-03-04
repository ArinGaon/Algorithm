#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string myString) {
    string answer = "";
    
    for(int i = 0; i < myString.length(); i++){
        answer.push_back(tolower(myString[i]));
    }
    return answer;
}