#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll long long

int main(){
    ull n=5;
    // cin >> n;
    for(ull i = 1; i <= n; i++){
        ull ans = (pow(i,2)*(pow(i,2)-1)/2) - 4*(i-1)*(i-2);
        cout << ans << endl;
    }
    cout << sizeof(unsigned long long)*8 << endl;
}