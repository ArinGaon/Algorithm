#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(vector<int> num_list) {
    int sum1 = 0, sum2 = 0;
    for(int i=0; i<num_list.size(); i++){
        if(i%2 ==0)
            sum1 += num_list[i];
        else
            sum2 += num_list[i];
            
    }
    return max(sum1, sum2);
}