#include <bits/stdc++.h>
using namespace std;

bool validMountainArray(vector<int> &arr)
{
    int i = 0;
    while ((arr[i] <= arr[i + 1]) && i < (arr.size() - 1))
        i++;
    if ((i + 1 == arr.size()) || i == 0)
        return false;
    while ((arr[i] >= arr[i + 1]) && (i < arr.size() - 1))
    {
        if (arr[i] <= arr[i + 1])
        {
            return false;
        }
        i++;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    vector<int> arr = {0, 1, -1};
    cout << validMountainArray(arr) << endl;
    return 0;
}