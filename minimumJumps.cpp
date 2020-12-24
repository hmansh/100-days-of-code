#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    int *arr;
    arr = new int[n];

    for(int i = 0 ; i < n ;i ++){
        arr[i] = rand()%10;
    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    } cout << endl;

    int jumps = 0;
    int elements = 0;
    int i = 0;

    while(elements < n){
            elements += arr[i];
            i += arr[i];
            jumps++;
    }

    cout << "JUMPS : " << jumps << endl;
    return 0;
}