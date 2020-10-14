#include <bits/stdc++.h>
#include <iostream>
using namespace std;

void swap(int *a, int *b){
    int * temp;
    *temp = *b;
    *b = *a;
    *a = *temp;
}

int main()
{
    int array[] = {1, 3, 5, 6, 7};
    int i = 0;
    int j = 5 - 1;

    for (int a = 0 ; a <  5 ; a++){
        std::cout << array[a] << " ";
    }
    
    cout << "\nRev - ";

    while( i < j){
        swap(&array[i++], &array[j--]);
    }
    
    for (int a = 0 ; a <  5 ; a++){
        std::cout << array[a] << " ";
    }

    return 0;
}
