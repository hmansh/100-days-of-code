#include <iostream>
#include <algorithm>
#include <set>

using namespace std;
#define max(a,b) a > b ? a : b;
#define min(a,b) a > b ? b : a;

int main(){
    int n, m;
    cin >> n >> m;
    int *arr1;
    arr1 = new int[n];
    int *arr2;
    arr2 = new int[m];
    for(int i = 0 ; i < n ; i++){
        arr1[i] = rand()%30;
    }
    for(int i = 0 ; i < m ; i++){
        arr2[i] = rand()%30;
    }
    
    sort(arr1, arr1 + n);
    sort(arr2, arr2 + m);
    
    for(int i = 0; i < n ; i++){
        cout << arr1[i] << " ";
    } cout << endl;
    for(int i = 0; i < m ; i++){
        cout << arr2[i] << " ";
    } cout << endl;
    
    int i = 0, j = 0;
    set<int> unions;
    set<int> intersections;
    while (j < m || i < n){
        if (arr1[i] > arr2[j]){ intersections.insert(arr2[j]); j++;}
        else if (arr1[i] < arr2[j]){ intersections.insert(arr1[i]); i++; }
        else if (arr1[i] == arr2[j]){ unions.insert(arr1[i]); i++; j++;}
        else { i++; j++;}
    }
    cout << "Union : ";
    for (int a : unions){
        cout << a << " ";
    }
    cout << "\nIntersection : ";
    for (int a : intersections){
        cout << a << " ";
    }
    
    return 0;
}