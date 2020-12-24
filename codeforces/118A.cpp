// deletes all the vowels,
// inserts a character "." before each consonant,
// replaces all uppercase consonants with corresponding lowercase ones.
#include<bits/stdc++.h>
using namespace std;

int main(){
    string res = "";
    string ip;
    cin >> ip;
    int n = ip.length();
    for(int i = 0; i < n; i++){
        if( ip[i] >= 'A' && ip[i] <= 'Z'){
            ip[i] += 32;
        }
    }
    for(int i = 0; i < n; i++){
        if( ip[i] == 'a' || ip[i] == 'e' || ip[i] == 'i' ||
            ip[i] == 'o' || ip[i] == 'u' || ip[i] == 'y'){
            continue;
        } else {
            res+=ip[i];
        }
    }

    for(char c : res){
        cout << "." << c;
    }
    return 0;
}