#include <bits/stdc++.h>
using namespace std;

int getbit(int n, int i){
    return (n&(1<<i))!=0;
}

int setbit(int n, int i){
    return (n|(1<<i));
}

int clearbit(int n, int i){
    int mask = ~(1<<i);
    return n&mask;
}

int main(){
    int n, pos;
    cout << "Numbers : " ;
    cin >> n;
    cout << "Position : ";
    cin >> pos;
    // cout << "Present : " << getbit(n, pos) << " at pos -> " << pos+1 << endl;
    cout << "Present : " << setbit(n, pos) << " at pos -> " << pos+1 << endl;
}