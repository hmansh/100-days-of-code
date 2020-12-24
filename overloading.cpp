#include <iostream>
using namespace std;

class Addition{
    public:
    void add(int a, int b){
        cout << a+b << endl;
    }
    void add(int a, int b, int c){
        cout << a+b+c << endl;
    }
};

int main(){
    Addition obj;
    obj.add(1, 2);
    obj.add(1, 2, 3);
    return 0;
}