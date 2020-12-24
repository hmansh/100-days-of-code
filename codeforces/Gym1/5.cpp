#include <bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    while (tt--){
        int n;
        int k;
        cin >> n >> k;
        string res = "";
        string ex = "abc";
        int i = 0;
        while(n!=0){
            if (k == 1){
                res+=ex[i++%3];    
                n--;
            }
            else {
                for(int j = 0; j < k; j++){
                    res+=ex[i%3];
                    n--;}
                k = 1;
                i++;
                // n--;
            }
        }
        cout << res << endl;
    }
}