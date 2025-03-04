#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(vector<string> strArr) {
    vector<string> answer;
    string check_str;
    
    transform(strArr[0].begin(), strArr[0].end(), back_inserter(check_str), ::tolower);
    answer.push_back(check_str);
    for(int i = 1; i < strArr.size(); i++){
        check_str.erase();
        if (i % 2 == 1){
            transform(strArr[i].begin(), strArr[i].end(), back_inserter(check_str), ::toupper);
            answer.push_back(check_str);
        }
        else {
            transform(strArr[i].begin(), strArr[i].end(), back_inserter(check_str), ::tolower);
            answer.push_back(check_str);
        }
    }
    
    return answer;
}