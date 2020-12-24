#include<bits/stdc++.h>
using namespace std;


int n2m(int n, int m){
    if (n == m){
        cout << n << ", ";
        return 0;
    } else {
        cout << n << ", ";
        return n2m(n+1, m);
    }
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    
    //iterative approach
    for(int i = n; i <= m ; i++){
        cout << i << ", ";
    } cout << endl;

    //recursive approach
    n2m(n, m);
    return 0;
}
