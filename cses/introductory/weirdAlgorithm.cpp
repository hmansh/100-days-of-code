#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n;
    cin >> n;
    while(n!=1){
        cout << n << " ";
        if(n%2==0){
            n = n/2;
            // cout << n << " ";
        } else {       
            n = 3*n + 1;
        }
    }
    cout << n << " ";
    return 0;
}