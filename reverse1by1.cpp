#include <iostream>
#include <stdlib.h>
using namespace std;

void swap(int *a, int *b){
    int temp = *b;
    *b = *a;
    *a = temp;
}

int main(){
    int n ;
    cin >> n;
    int *arr;
    arr = new int[n];
    for(int i = 0; i < n ;  i++){
        arr[i] = rand()%10;
    }

    for(int i = 0 ; i < n;){
        cout << arr[i++] << " ";
    } cout << endl;

    int size = n - 1;
    int last = arr[size];

    int i  = 0;
    int count = 0;
    while(count < size){
        arr[size - i] = arr[size - i - 1];
        count++;
        i++;
    } arr[0] = last;

    for(int j = 0 ; j < n;){
        cout << arr[j++] << " ";
    } cout << endl;

    return 0;

}   