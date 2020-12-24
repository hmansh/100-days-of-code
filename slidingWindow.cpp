#include <bits/stdc++.h>
using namespace std;

int main(){
    int n = 0;
    cin >> n;
    int arr[n];
    for (int i = 0 ; i < n ; i++){
        cin >> arr[i];
    }
    // for (int i = 0 ; i < n ; i++){
    //     cout << arr
    // }
    int k = 3;
    for(int i = 0; i < n - k + 1 ; i++){
        for(int j = i; j < i+k; j++){
            cout << arr[j] << " ";
        }
        cout << endl;
    }
    return 0;
}