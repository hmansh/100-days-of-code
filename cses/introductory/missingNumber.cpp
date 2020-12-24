#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long n;
    cin >> n;
    unsigned long long sum = 0;
    for(long long int i = 0; i < n-1; i++){
        int x;
        cin >> x;
        sum+=x;
    }
    cout << n*(n+1)/2 - sum;
    return 0;
}