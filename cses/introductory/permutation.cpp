#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin >> n;
    vector<long int> a(n);
    if (n == 1){
        cout << 1;
        return 0;
    }
    if(n<=3){
        cout << "NO SOLUTION";
        return 0;
    }
    if(n == 4){
        cout << "2 4 1 3";
        return 0;
    }

    long int j = 1;
    for(long int i = 0; i < n; i+=2){
        a[i] = j++;
    }
    for(long int k = 1; k < n; k+=2){
        a[k] = j++;
    }
    for(long int x: a){
        cout << x << " ";
    }
    return 0;
}