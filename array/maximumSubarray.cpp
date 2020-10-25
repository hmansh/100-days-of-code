#include <iostream>
#include <stdlib.h>
using namespace std;

int main(){
    int n;
    cin >> n; 
    int *arr;
    arr = new int[n];

    for(int i = 0 ; i < n ;i ++){
        int x = (int)(rand()%9);
        if((int)(rand())%2 == 1){
            x = -x;
        }
        arr[i] = x;
    }

    for(int i = 0 ; i < n ; i++){
        cout << arr[i] << " " ;
    } cout << endl;

    int maximum = -100000;
    int j = 0;
    int i = 0;
    
    while(j <= n-1){
        int sum = 0;
        int prevsum = 0;
        for(int k = i; k <= j ; k++ ){
            sum+= arr[k];
        } j++;
        if (prevsum > sum){
            i = j;
        }
        if (sum > maximum){
            maximum = sum;
        }
    }
    cout << maximum;
    return 0;
}