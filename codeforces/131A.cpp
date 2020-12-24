#include <bits/stdc++.h>
using namespace std;

string capsLock(string s){
    bool rule = false;
    if (s[0] >= (int)'a' && s[0] <= (int)'z'){
            rule = true;
    }

    if (s[0] >= (int)'A' && s[0] <= (int)'Z'){
            rule = true;
    }

    for(int i = 1 ; i < s.length(); i++){
        if (s[i] >= (int)'a' && s[i] <= (int)'z'){
            rule = false;
        }
    }

    if (rule){
        // int i = 0;
        s[0] -= 32;
        for(int i = 1 ; i < s.length(); i++){
            s[i] += 32;
        }
    }
    return s;
}

int main(){
    string s;
    cin >> s;
    cout << capsLock(s);
    return 0;
}