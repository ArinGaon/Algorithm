#include <string>
#include <vector>

using namespace std;

int solution(string my_string, string is_prefix) {    
    int res = my_string.find(is_prefix);
    if(res == 0)
        return 1;
    else return 0;
}