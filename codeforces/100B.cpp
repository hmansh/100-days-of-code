#include<bits/stdc++.h>
using namespace std;

bool friendly(int a, int b){
    if (a%b == 0)
        return true;
    if (b%a == 0)
        return true;
    return false;
}

int main(){
    int n;
    cin >> n;
    string ip;
    cin >> ip;
    vector <int> arr;
    for(char c : ip){
        if(c >= '1' && c <= '9'){
            arr.push_back((int)(c-'0'));
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n ; j++){
            if (!friendly(arr[i], arr[j])){
                cout << "NOT FRIENDS";
                return 0;
            }
        }
    }
    cout << "FRIENDS";
    return 0;
} 