#include <string>
#include <vector>

using namespace std;

int solution(vector<int> numbers, int n) {
    int res = 0;
    for (int i=0; i<numbers.size(); i++){
        res += numbers[i];
        if ( res > n )
            return res;
    }
}