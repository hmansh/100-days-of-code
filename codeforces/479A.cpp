#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int res1 = a*(b+c) > (a+b)*c ? a*(b+c) : (a+b)*c ;
    int res2 = a+b+c > a*b*c ? a+b+c : a*b*c ;
    int res3 = (a*b)+c > a+(b*c) ? (a*b)+c : a+(b*c) ;
    int res = res1 > res2? (res1 > res3 ? res1 : res3 ) : (res2 > res3 ? res2 : res3); 
    cout <<  res << endl;
}