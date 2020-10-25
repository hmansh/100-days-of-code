#include <iostream>
using namespace std;

int sum(int n){
    cout << n << endl;
    int ans = 0;
    for(int i = 1; i <= n ; i++){
        ans += i;
    }
    cout << ans << endl;
    return ans;
};

int main(){
    #ifndef ONLINE_JUDGE
        freopen("inputs.txt", "r", stdin);
    #endif
    int n;
    cin >> n;
    cout << sum(n) << endl;
    return 0;
}