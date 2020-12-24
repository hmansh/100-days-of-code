#include<bits/stdc++.h>
using namespace std;

int main(){
    int tt;
    cin >> tt;
    int z = 0;
    while(tt--){
        int n;
        cin >> n;
        string in;
        string out;
        cin >> in;
        cin >> out;

        // cout << in << endl;
        // cout << out << endl;
        cout << "Case #" << ++z << ":"<< endl;
        bool left[n] = {false};
        bool right[n] = {false};

        for(int i = 0; i < n; i++){
            //incoming
            if(in[i]=='Y' && out[i+1]=='Y')
                left[i]=true;
            //outgoing
            if(in[i+1]=='Y' && out[i]=='Y')
                right[i]=true;
        }
        for(int s=0; s<n; s++){
            bool sol[n]={false};
            sol[s]=true;
            int l=s;
            while(l-1>= 0 && left[l-1])
                sol[--l] = true;
            int r=s;
            while(r+1<n && right[r])
                sol[++r] = true;
            for(int i=0; i<n; i++){
                char x = sol[i]?'Y':'N';
                cout << x;
            }
            cout << endl;
        }
    }
    return 0;
}