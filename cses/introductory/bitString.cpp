#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define MOD 1000000007

int main(){
    ull n;
    cin >> n;
    ull result = 1;
    for(ull i = 0; i < n; i++){
        result *= 2;
        result %= MOD;
    }
    cout << result;
    return 0;
}