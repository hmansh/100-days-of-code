#include <iostream>
using namespace std;

int main()
{
    int n, sum;
    cin >> n >> sum;
    int *array;
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    int k = 0;
    int newsum = 0;
    for (int j = 0; j < n; j++)
    {
        for (int x = k; x <= j; x++)
        {
            // cout <<  " Array -> " << array[x] << endl;
            newsum += array[x];
        }
        // cout << " Newsum -> " << newsum << endl;
        if (newsum == sum)
        {
            cout << "SOLUTION " << k + 1 << " " << j + 1 << endl;
            // to find all such solutions comment out the line below;
            return 0;
        }
        if (newsum > sum)
        {
            k++;
            j--;
        }
        newsum = 0;
    }
    return 0;
}