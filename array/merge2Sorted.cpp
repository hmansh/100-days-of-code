#include<iostream>
#include<algorithm>
#include<stdlib.h>
using namespace std;

void swap(int * a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int *A;
    int *B;

    A = new int[n];
    B = new int[m];

    for(int i = 0 ; i < n ; i++){
        A[i] = rand()%100;
    }
    for(int i = 0 ; i < m ; i++){
        B[i] = rand()%100;
    }

    sort(A, A+n);
    sort(B, B+m);

    for(int i = 0; i < n ; i++){
        cout << A[i] << " ";
    } cout << endl;

    for(int i = 0; i < m ; i++){
        cout << B[i] << " ";
    } cout << endl;

    int i = 0;
    int j = 0;
    while(i < n ){
        if(A[i] > B[j]){
            swap(&A[i], &B[j]);
            i++;
            // continue;
        }
        if(A[i] <= B[j]){
            swap(&A[i], &B[j++]);
            j++;
            // continue;
        }
    }

    for(int i = 0; i < n ; i++){
        cout << A[i] << " ";
    } cout << endl;
    for(int i = 0; i < m ; i++){
        cout << B[i] << " ";
    } cout << endl;

    return 0;
}
