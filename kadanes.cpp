#include <bits/stdc++.h>
using namespace std;

int main(){
    int  n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++){
        cin >> arr[i];
    }

    for(int i  =0 ; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;

    int max_global = arr[0];
    int max_curr = arr[0];
    for (int i = 0 ; i < n; i++){
        max_curr = max(arr[i], arr[i]+max_curr);
        if (max_curr > max_global){
            max_global = max_curr;
        }
    }

    cout << "Max Subarray Sum : " << max_global<< endl;
    return 0;
}