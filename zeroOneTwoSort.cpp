#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n ;
    cin >> n;
    int *arr;
    arr = new int[n];
    for(int i = 0; i < n ; i++){
        arr[i] = (int)(rand()%3);
    } cout << endl;

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;

    int zero = 0;
    int one = 0;
    int two = 0;
    for(int i = 0; i < n ; i++){
        if(arr[i] == 0){
            zero++;
        } else if (arr[i] == 1){
            one++;
        } else {
            two++;
        }
    }

    int i = 0;
    while (zero > 0){
        arr[i++] = 0;
        zero--;
    } while (one > 0){
        arr[i++] = 1;
        one--;
    } while (two > 0){
        arr[i++] = 2;
        two--;
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;

    return 0;
}
