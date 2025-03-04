#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(string my_string, string alp) {
    string answer = "";
    
    int is_txt = my_string.find(alp);
    if( is_txt != string::npos ){
        for(int i = 0; i < my_string.length(); i++){
            if(my_string[i] == alp[0])
                my_string[i] = toupper(my_string[i]);         
        }
    }        
    return my_string;
}