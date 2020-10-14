#include <iostream>
#include <stdlib.h>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    int k;
    cin >> n >> k;
    int *array;
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
        array[i] = (int)(rand() % 100);
    }

    for (int a = 0; a < n; a++)
    {
        cout << array[a] << " ";
    }

    sort(array, array + n);
    // cout << endl;

    for (int a = 0; a < n; a++)
    {
        cout << array[a] << " ";
    }

    int kmin;
    int kmax;
    int mincount = 1;
    int maxcount = 1;

    int i = n - 1, j = 0;
    while (i >= j)
    {
        if (array[i] == array[i - 1])
        {
            i--;
        }
        if (array[j] == array[j + 1])
        {
            j--;
        }
        if ((array[i] != array[i - 1]) && (maxcount != k))
        {
            kmax = array[i--];
            maxcount++;
        }
        if ((array[j] != array[j + 1]) && (mincount != k))
        {
            kmin = array[j++];
            mincount++;
        }
    }
    cout << "\n"
         << k << "th min : " << kmin << ", " << k << "th max : " << kmax;

    cout << endl;
    return 0;
}
