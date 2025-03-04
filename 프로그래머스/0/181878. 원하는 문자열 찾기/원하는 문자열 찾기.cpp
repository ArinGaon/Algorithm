#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int solution(string myString, string pat) {
    
    for(int i = 0; i < myString.length(); i++) {
       myString[i] = tolower(myString[i]);
    }
    for(int i = 0; i < pat.length(); i++) {
        pat[i] = tolower(pat[i]);
    } 
    
    int check = myString.find(pat);
    if (check != string::npos){
        return 1;
    }
    else 
        return 0;
}