#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n][3];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < 3; j++){
            cin >> arr[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum += arr[j][i];
        }
        if (sum != 0){
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
    return 0;
}