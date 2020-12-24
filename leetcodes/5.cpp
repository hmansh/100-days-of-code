#include <bits/stdc++.h>
using namespace std;

int removeElement(vector<int> &nums, int val)
{
    // vector<int> res;
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        int j = i;
        if (nums[i] == val)
        {
            while (j < nums.size())
            {
                nums[j] = nums[j + 1];
                j++;
            }
            count++;
        }
    }
    nums.resize(nums.size() - count);
    return count;
}

int main(){
    vector<int> res = {3,2,2,3};
    int c = 3;
    cout << removeElement(res, c) << endl;
    for(int a : res){
        cout << a << " ";
    } cout << endl;
}