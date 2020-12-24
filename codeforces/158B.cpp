#include<bits/stdc++.h>
using namespace std;
#define MAX 4;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n ; i++ ){
        cin >> arr[i];
    }
    int three = 0;
    int two = 0;
    int one = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == 1)
            one++;
        if(arr[i] == 2)
            two++;
        if(arr[i] == 3)
            three++;
    }

    int taxi = n - (three + one + two);
    // cout << three << two << one << endl;
    // cout << taxi << endl;
    if (three > one){
        taxi += one;
        three -= one;
        one = 0;
    }
    else if (one >= three){
        taxi += three;
        one -= three;
        three = 0;        
    }

    taxi += three;
    taxi += two/4;
    two = two%4;

    taxi += (2*two + one)/4;
    taxi += 1;
    cout << taxi;
}