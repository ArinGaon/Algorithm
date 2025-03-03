#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<string> solution(string my_string) {
    vector<string> answer;
    string tmp;    
    for(int i = 0; i < my_string.length(); i++){
        if (my_string[i] == ' ') {
            if(!tmp.empty()){
                answer.push_back(tmp);
                tmp.clear();
            }
        }
        else if (my_string[i] != ' '){
            tmp.push_back(my_string[i]);
            if (i == my_string.length()-1 && !tmp.empty())
                answer.push_back(tmp);
        }
    }
    
    return answer;
}