#include <string>
#include <vector>

using namespace std;

int solution(string myString, string pat) {
    for (int i = 0; i < myString.length(); i++){
        if(myString[i] == 'A')
            myString[i] = 'B';
        else
            myString[i] = 'A';
    }
    
    int res = myString.find(pat);
    if(res == string::npos)
        return 0;
    else
        return 1;    
}