#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n][n];
    
    for(int i = 0; i< n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    
    int re = n;
    int ce = n;
    int rs = 0;
    int cs = 0;

    while(re >= rs && cs <= ce){

        for(int j = cs; j < ce; j++){
            cout << arr[rs][j] << " ";
        }
        rs++;
        for(int i = rs; i < re; i++){
            cout << arr[i][ce-1] << " ";
        }
        ce--;
        for(int j = ce-1; j >= cs; j-- ){
            cout << arr[re-1][j] << " ";
        }
        re--;
        for(int i = re-1; i >= rs; i-- ){
            cout << arr[i][cs] << " ";
        }
        cs++;
    }
}