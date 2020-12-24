#include <bits/stdc++.h>
using namespace std;

void processSubstring(char *str){
    if ( *(str) == '\0'){
        return;
    } else {
        cout << str[0] << endl;
        processSubstring(str+1);
    }
}

int main()
{
    char arr[] = {"himanshu"};
    processSubstring(arr);
    return 0;
}
