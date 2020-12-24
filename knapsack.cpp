#include<bits/stdc++.h>
using namespace std;
#define MAX 15;

struct data{
    int price;
    int weight;
    double ratio;
};

bool sortPW(const data i1, const data i2){
    return i1.ratio > i2.ratio;
}

int main(){
    int n = 5;
    vector<data> items = {{10, 2, 0.0},
                        {5, 3, 0.0},
                        {15, 5, 0.0},
                        {7, 7, 0.0},
                        {6, 21, 0.0},
                        {18, 4, 0.0},
                        {3, 1, 0.0}};

    for(int i = 0; i < items.size(); i++){
        items[i].ratio = (float)items[i].price/(float)items[i].weight;
    }
    
    sort(items.begin(), items.end(), sortPW);

    int bag_cap = MAX;
    float profit = 0.0;
    for(data x : items){
        if(bag_cap - x.weight >= 0){
            bag_cap = bag_cap - x.weight;
            profit += x.price;
        }
        else{
            int rem = bag_cap;
            bag_cap = bag_cap - x.weight;
            profit += (rem/x.weight)*x.price;
        }
    }

    // for(data x : items){
    //     cout << x.ratio << " ";
    // }
    cout << "Profit : " << profit << endl;
    cout << "Weight : " << bag_cap << endl;
    return 0;
}
