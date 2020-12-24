#include <bits/stdc++.h>
#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int *array;
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = (int)(rand() % 100);
    }

    int min = 99999999;
    int max = -99999999;
    
    for (int a = 0 ; a <  n ; a++){
        std::cout << array[a] << " ";
    }
    
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        if (array[i] > max)
        {
            max = array[i];
        }
        else if (array[i] < min)
        {
            min = array[i];
        }
    }

    cout << "min : " << min << ", max : " << max << "\n";
    return 0;
}
