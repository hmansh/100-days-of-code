#include <bits/stdc++.h>
using namespace std;

// https://www.hackerrank.com/challenges/reverse-game/problem
// Akash and Akhil are playing a game. They have  balls numbered from  to .
// Akhil asks Akash to reverse the position of the balls, i.e., to change 
// the order from say, 0,1,2,3 to 3,2,1,0. He further asks Akash to reverse 
// the position of the balls  times, each time starting from one position 
// further to the right, till he reaches the last ball. So, Akash has to 
// reverse the positions of the ball starting from  position, then from  
// position, then from  position and so on. At the end of the game, Akhil 
// will ask Akash the final position of any ball numbered . Akash will win 
// the game, if he can answer. Help Akash.

void swap(int *a, int *b){
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}

int main(int argc, char const *argv[])
{
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
    #endif
    unsigned int testCases;
    cin >> testCases;
    unsigned int count = 0;
    while(true){
        unsigned int digits, swaps;
        cin >> digits >> swaps;
        vector<int> numbers(digits);
        iota(numbers.begin(), numbers.end(), 0);
        int i = 0;
        while(i < digits+1){
            int k = i, j = digits - 1;
            while(k < j){
                swap(&numbers[k++], &numbers[j--]);
            }
            i++;
        }
        count++;
        int idx = 0;
        for(int a : numbers){
            if (a == swaps) break;
            idx++;
        } cout << idx << endl;
        if (count == testCases) break;
    }
    return 0;
}
