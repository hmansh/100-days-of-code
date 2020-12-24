#include <bits/stdc++.h>
using namespace std;

string vowelsRemoved(string arr, int n){
    if(arr[n-1] == '\0'){
        return "";
    } else if ( arr[n-1] == 'a' || arr[n-1] == 'e' ||
         arr[n-1] == 'i' || arr[n-1] == 'o' || arr[n-1] == 'u'){
            return vowelsRemoved(arr, n-1);
    } else {
        return vowelsRemoved(arr, n-1) + arr[n-1];
    }
}

int main()
{
    string name = "hehehehehe";
    cout << name << endl;
    cout << vowelsRemoved(name, name.size());
    return 0;
}
