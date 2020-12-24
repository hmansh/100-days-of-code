#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define ll unsigned long long
#define MOD 1000000007

ll binpow(ll a, ll b) {
    ll res = 1;
    while(b > 0){
        if(b&1)
            res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main(){
    ull n, m;
    cin >> n >> m;
    ull res = binpow(n,m);
    cout << res;
    return 0;
}