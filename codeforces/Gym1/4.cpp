#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n;
        cin >> n;
        int arr[n];
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }
        map<int, int> res;
        for(int i = 0; i < n; i++){
            if (res.find(arr[i]) != res.end()){
                res[arr[i]]++;
            }
            else {
                res[arr[i]] = 1;
            }
        }
        int min = 1000000000;
        int minIdx = n+2;
        for (int i = 0; i < n; i++){
            if (res[arr[i]] == 1){
                if (arr[i] < min){
                    min = arr[i];
                    minIdx = i;
                }
            }
        } if (minIdx == n+2){
            cout << "-1" << endl;
        } else {
            cout << minIdx+1 << endl;
        }
    }
};