#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> arr) {
    vector<int> answer;
    for(int i=0; i<arr.size(); i++){
        int tmp = arr[i];
        while(tmp--){
            answer.push_back(arr[i]);
        }
    }
    return answer;
}