#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while(tt--){
        int n, m;
        cin >> n >>  m;
        int bottom[n];
        int left[m];
        for(int i = 0; i < n; i++){
            cin >> bottom[i];
        }
        for(int i = 0; i < m; i++){
            cin >> left[i];
        }
        int i = 0;
        int j = 0;
        int count = 0;
        while(i<n && j<m){
            if(bottom[i] == left[j]){
                count++;
                i++; j++;
            }
            if(bottom[i] < left[j]){
                i++;
            }
            if(bottom[i] > left[j]){
                j++;
            }
        }
        cout << count << endl;
    }
}