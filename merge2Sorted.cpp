#include <iostream>
#include <algorithm>
#include <stdlib.h>
using namespace std;

int next(int gap){
    if (gap <= 1) return 0;
    return gap/2 + gap%2;
}
int main(int argc, char const *argv[])
{
    int n, m;
    cin >> n >> m;
    int *a;
    int *b;

    a = new int[n];
    b = new int[m];

    for (int i = 0; i < n; i++)
    {
        a[i] = rand() % 100;
    }
    for (int i = 0; i < m; i++)
    {
        b[i] = rand() % 100;
    }

    sort(a, a + n);
    sort(b, b + m);

    for (int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < m; i++){
        cout << b[i] << " ";
    }

    cout << endl;

    int i = 0;
    int j = 0;
    int gap = n+m;

    for(gap = next(gap); gap > 0 ; gap = next(gap)){
        cout << gap << endl;
        for(i = 0; i + gap < n; i++){
            if (a[i] > a[i+gap]){
                swap(a[i], a[i+gap]);
            }
        }

        for(j = gap > n ? gap - n : 0 ; i < n && j < m; i++, j++){
            if (a[i] > b[j]){
                swap(a[i], b[j]);
            }
        }

        if (j < m){
        for( j = 0 ; j+gap < m ; j++){
            if (b[j] > b[j+gap]){
                swap(b[j], b[j+gap]);
            }
        }}
    }


    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    cout << endl;

    for (int i = 0; i < m; i++)
        cout << b[i] << " ";

    return 0;
}
