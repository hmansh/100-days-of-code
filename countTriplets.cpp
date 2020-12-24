// #include <iostream>
#include <bits/stdc++.h>

/*
4
1 5 3 2

3
2 3 4
*/

int main(int argc, char const *argv[])
{
    int n;
    std::cin >> n;
    int *array;
    array = new int[n];
    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }

    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                if (array[k] == array[i] + array[j])
                {
                    count++;
                    continue;
                }
            }
        }
    }
    std::cout << "\nO(N^3) Count = " << count << std::endl;

    count = 0;
    std::sort(array, array + n);

    for (int i = n - 1; i >= 0; i--)
    {
        int j = 0;
        int k = i - 1;
        while (j < k)
        {
            if (array[i] == array[j] + array[k])
            {
                count++;
                j++;
                k--;
            }

            else if (array[i] > array[k] + array[j])
            {
                j++;
            }

            else
            {
                k--;
            }
        }
    }
    std::cout << "O(N^2) Count = " << count << std::endl;
    return 0;
}
