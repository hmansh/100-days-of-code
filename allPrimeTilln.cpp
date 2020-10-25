#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int i = 2;
    cout << "Primes :- ";
    int flag;
    while( i <= n ){
        int j = 2;
        flag = 0;
        while( j < i ){
            if( i%j == 0){
                i++;
                flag = 1;
            }
            else{
                j++;
            }
        }
        if (flag == 0){cout << i << " " ;}
        i++;
    }
    cout << endl;
    return 0;
}