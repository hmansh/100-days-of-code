#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int arr[n];
        int j = 1;
        int sq = n/2;
        for(int i = n-1; i >= 0; i--){
            arr[i] = j++;
        }
        // cout << sq << " " << n-1 << endl;
        swap(arr[sq], arr[n-1]);
        for(int i = 0; i < n ; i++)
            cout << arr[i] << " " ;
        cout << endl;
    }
    return 0;
}