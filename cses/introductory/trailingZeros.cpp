#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long
#define MOD 1000000007
 
int main(){
    int n;
    cin >> n;
    int count = 0;
    for(int i = 5; i <= n; i*=5){
        count += ceil(n/i);
    }
    cout << count << endl;
return 0;
}