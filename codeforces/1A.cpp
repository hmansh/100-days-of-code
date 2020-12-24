#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int n, m, a;
    cin >> n >> m >> a;
    unsigned long long int l = 0, b = 0;
    if (a == 1){
        cout << n*m;        
        return 0;
    }
    while(l < n){
        l += a;
    }
    while(b < m){
        b += a;
    }
    cout << (l*b)/(a*a);
    return 0;
}