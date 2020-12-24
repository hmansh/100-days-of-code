#include <bits/stdc++.h>
using namespace std;

int main(){
    long int n;
    cin >> n;
    vector<long int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    long int turns = 0;
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // } cout << endl;
    for(int i = 1, j = 0; i < n; i++, j++){
        if (a[i] < a[j]){
            turns += a[j]-a[i];
            a[i] = a[j];
        }
    }
    // for(int i = 0; i < n; i++){
    //     cout << a[i] << " ";
    // }
    cout << turns;
}