#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    int z = 0;
    while(tt--){
        int n;
        cin >> n;
        string stones;
        cin >> stones;
        int a = 0;
        for(char c: stones){
            if(c == 'A')
                a++;
        }
        char x = a == (n-1)/2 || a == (n+1)/2 ? 'Y' : 'N';
        cout << "Case #" << ++z << ": " << x << endl;
    }
    return 0;
}