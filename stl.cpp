#include <iostream>
#include <bits/stdc++.h>
#include <map>
using namespace std;

signed main(){
    map<int, string> namemap;
    namemap[1] = "Tom";
    namemap[2] = "hello";
    map<string, int> names;
    names["hello"] = 5;
    names["hi"] = 4;
    cout << names["hello"] << endl;
    cout << namemap[1] << endl;
    for(map<string, int>::iterator it = names.begin(); it != names.end(); it++){
        cout << it->first << " -> " << it->second << endl;
    }
    // cout << names.begin();
    names.clear();
    return 0;
}