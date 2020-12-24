#include <bits/stdc++.h>
using namespace std;
#define long int int;

// int increment(int a){
    // return a++;
// }

void increment(int *a){
    cout << "Func : " << a << endl;
    cout << "Func : " << *a << endl;
    *a = 6;
    cout << "Func : " << *a << endl;
}

int main(){
    int a[] = {10, 1, 2};
    int *ptr;
    ptr = a;
    cout << *ptr << endl;
    cout << *++ptr << endl;
    ptr++;
    cout << *ptr << endl;

    int **qtr = &--ptr;
    cout << **qtr << endl;

    int b = 5;
    increment(&b);
    cout << "Main : " << b << endl;
    return 0;
}