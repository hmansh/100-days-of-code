#include <bits/stdc++.h>
#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

void swap(int *a, int *b){
    int *temp;
    *temp = *b;
    *b = *a;
    *a = *temp;
}

int main(int argc, char const *argv[])
{
    int n ;
    cin >> n;
    int *arr;
    arr = new int[n];

    for(int i = 0; i < n ; i++){
        int x = (int)(rand()%9);
        if((int)(rand())%2 == 1){
            x = -x;
        }
        arr[i] = x;
    }

    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;

    int i = n - 1;
    int j = 0;
    while (j <= i){
        if (arr[j] >= 0 && arr[i] < 0){
            cout << "Swaped \n";
            swap(&arr[i], &arr[j]);
            i--;
            j++;
            // cout << " - j++ , i-- "<< endl;
        } else if (arr[j] < 0 && arr[i] < 0){
            j++;
        }else {
            cout << "i--"<< endl;
            i--;
        }
    } cout << endl;
    for(int i = 0; i < n ; i++){
        cout << arr[i] << " ";
    } cout << endl;
    return 0;
}
