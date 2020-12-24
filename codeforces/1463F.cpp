#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int x, y;
    cin >> n >> x >> y;
    vector<long long int> res;
    long long int i = 1;
    // res.push_back(1);
    while(res.size() < n && i < n){
        for(int z = 0; z < res.size(); z++){
            if (abs(res[z]-i) == x || abs(res[z]-i) == y){
                // cout << i << " ";
                i++;
                // cout << ".";
            } 
        }
        res.push_back(i++);
    }
    // for(int i: res){
    //     cout << i << " ";
    // }
    cout << res.size();
}