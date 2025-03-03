#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int sum(vector<int> arr){
    int ans = 0;
    for(int i=0; i<arr.size(); i++)
        ans += arr[i];
    
    return ans;
}


int solution(vector<int> arr1, vector<int> arr2) {    
    if (arr1.size() > arr2.size())
        return 1;    
    else if (arr1.size() < arr2.size())
        return -1;
    else {
        if (sum(arr1) > sum(arr2))
            return 1;
        else if (sum(arr1) < sum(arr2))
            return -1;
        else 
            return 0;        
    }

}