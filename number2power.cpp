#include<bits/stdc++.h>
using namespace std;

long int num2pow(int n, int pow){
    if(pow == 0){
        return 1;
    }
    if(pow == 1){
        return n;
    } else {
        return n*num2pow(n, pow-1);
    }
}

int main(int argc, char const *argv[])
{
    cout << num2pow(2, 30) << endl;
    return 0;
}
