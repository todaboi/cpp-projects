#include <iostream>
using namespace std;
bool is_palindrome(std::string text){
    string reversed = "";
    for(int i = text.size()-1;i>=0;i--){
        reversed += text[i];
    }
    if(reversed==text){
        return true;
    }
    return false;
}
int main() {
    // Write C++ code here
    cout<<is_palindrome("ABA");

    return 0;
}
