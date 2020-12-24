#include <bits/stdc++.h>
using namespace std;

int countOccurence(char n, char *arr){
    if(*arr == '\0'){
        return 0;
    } else if (*arr == n){
        return 1 + countOccurence(n, arr+1);
    } else {
        return 0 + countOccurence(n, arr+1);
    }
}

int main(int argc, char const *argv[])
{
    char arr[] = "burri burri zaimon";
    char n = 'r';
    cout << "Count : " << countOccurence(n, arr) << endl;
    return 0;
}
