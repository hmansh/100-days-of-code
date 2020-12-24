#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; int k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    // if (n == k){
    //     cout << n;
    //     return 0;
    // }
    int c=0;
    for(int i = 0; i < n; i++){
        // if (arr[k]>0){
            if (arr[i]>0 && arr[i] >= arr[k-1]){
                c++;
            }
        // }
    }
    cout << c;
    return 0;
}