#include <bits/stdc++.h>
using namespace std;

int newMin(int *arr, int i, int j){
    int min = 10000000;
    for(int k = i; k < j; k++){
        if (arr[k] < min){
            min = arr[k];
        }
    }
    return min;
}

int newMax(int *arr, int i, int j){
    int max = -100000000;
    for(int k = i; k < j; k++){
        if (arr[k] > max ){
            max = arr[k];
        }
    }
    return max;
}

void printArr(int *arr, int i, int j){
    cout << "New : ";
    for(int k = i; k <= j; k++){
        cout << arr[k] << " ";
    } cout << endl;
}

int main(){
    int n;
    int k;
    cin >> n >> k;
    int arr[n];
    for(int i = 0 ; i < n; i++)
        cin >> arr[i];
    
    int min = arr[0];
    int max = arr[0];
    int i = 0, j = 0;    
    int c = 0;
    while(i < n || j < n){
        if( max-min == k){
            // printArr(arr, i, j);
            c++;
            // cout << "Mx : " << max << ", Mn : " << min << " || " << max - min << " = " << k << endl;
            j++;
            min = newMin(arr, i, j+1);
            max = newMax(arr, i, j+1);
            continue;
        }
        if ( max-min < k){
            if (j < n)
                j++;
            // printArr(arr, i, j);
            min = newMin(arr, i, j+1);
            max = newMax(arr, i, j+1);
            continue;
        }
        if( max-min > k){
            if (i < n)
                i++;
            // printArr(arr, i, j);
            max = newMax(arr, i, j+1);
            min = newMin(arr, i, j+1);
            continue;
        }
    }
    cout << c ;
    return 0;
}