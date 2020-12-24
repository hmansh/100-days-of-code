#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll i, j;
    ll tt;
    cin >> tt;
    while(tt--){
        cin >> i >> j;
        ll z = max(i, j);
        ll z2 = (z-1)*(z-1);
        if (z%2){
            if(z==i){
                cout << z2 + j;
            } else {
                cout << z2 + 2*z - i;
            }
        } else {
            if(z==j){
                cout << z2 + i;
            } else {
                cout << z2 + 2*z - j;
            }   
        }
        cout << endl;
    }
}