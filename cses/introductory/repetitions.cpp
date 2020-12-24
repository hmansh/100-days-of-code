#include<bits/stdc++.h>
using namespace std;

int main(){
    string ip;
    cin >> ip;
    int n = ip.length();
    // int i = 0;
    string res = "";
    int max = -100;
    int i = 0;
    int j = 0;
    while( i<n || j<n){
        if (ip[i] == ip[j]){
            j++;
        }else{
            i=j;
        }
        if(max < j-i){
            max = j-i;
        }
    }
    cout << max;
}